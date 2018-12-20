%{
	#include "error.c"
	#include "lex.yy.c"
	#include "symbol_table.c"
	#include <string.h>
	int yylex();
	void yyerror(char *);
	char name[28][10] = {"INT", "FLOAT", "ID", "SEMI", "COMMA", "ASSIGNOP", 
	"RELOP", "PLUS", "MINUS", "STAR", "DIV", "AND", "OR", "DOT", "NOT", 
	"TYPE", "LP", "RP", "LB", "RB", "LC", "RC", "STRUCT", "RETURN", "IF", 
	"ELSE", "WHILE"};
%}
%union{
	struct ast *a;
}

%token <a> INT FLOAT ID SEMI COMMA ASSIGNOP RELOP PLUS MINUS STAR DIV AND OR DOT NOT TYPE LP RP LB RB LC RC STRUCT RETURN IF ELSE WHILE
%type <a> Program ExtDefList ExtDef ExtDecList Specifier StructSpecifier OptTag Tag VarDec FunDec VarList ParamDec CompSt StmtList Stmt DefList Def DecList
%type <a> Dec Exp Args

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%right ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left DIV STAR
%right NOT UMINUS
%left DOT LB RB LP RP
%%
Program:ExtDefList {
	$$ = newast1(maketext("Program"), $1);
	initsymbollist();
	freesymbollist();
};

ExtDefList:ExtDef ExtDefList {$$ = newast2(maketext("ExtDefList"), $1, $2);}
	| {$$ = newast(maketext("null"));}
	;
ExtDef:Specifier ExtDecList SEMI {$$ = newast3(maketext("ExtDef"), $1, $2, $3); addsymbol1($1->name, $2->namearg, $1->line);}
	|Specifier SEMI {$$ = newast2(maketext("ExtDef"), $1, $2);}
	|Specifier FunDec CompSt {$$ = newast3(maketext("ExtDef"), $1, $2, $3); changefunctype($2->name, $1->name); error8($1->name, $3->funcomptype, $1->line);}
	|error SEMI {}
;
ExtDecList:VarDec {$$ = newast1(maketext("ExtDecList"), $1); $$->namearg=addnamelist($$,$1->name, $1->arraymark);}
	|VarDec COMMA ExtDecList {$$ = newast3(maketext("ExtDecList"), $1, $2, $3); $$->namearg=addnamelist($3, $1->name, $1->arraymark);}
	;

Specifier:TYPE {$$ = newast1(maketext("Specifier"), $1); strcpy($$->name, $1->info.name);}
	|StructSpecifier {$$ = newast1(maketext("Specifier"), $1); strcpy($$->name, $1->name);}
	;
StructSpecifier:STRUCT OptTag LC DefList RC {$$ = newast5(maketext("StructSpecifier"), $1, $2, $3, $4, $5); strcpy($$->name, $2->name); 
					addstruct($2->name, $4->namearg, 1, $1->line); strcpy($$->name, $1->info.name); 
					char* name = "struct"; changefunctype($2->name, name); error15($4->funcomptype, $$->line);}
	|STRUCT Tag {$$ = newast2(maketext("StructSpecifier"), $1, $2); strcpy($$->name,$2->name); error17($2->name, $1->line);}
	;
OptTag:ID {$$ = newast1(maketext("OptTag"), $1); strcpy($$->name, $1->info.name);}
	| {$$ = newast(maketext("null"));}
	;
Tag:ID {$$ = newast1(maketext("Tag"), $1); strcpy($$->name, $1->info.name);}

VarDec:ID {$$ = newast1(maketext("VarDec"), $1); strcpy($$->name, $1->info.name); $$->arraymark = 0; }
	|VarDec LB INT RB {$$ = newast4(maketext("VarDec"), $1, $2, $3, $4); strcpy($$->name, $1->name); $$->arraymark = 1;}
FunDec:ID LP VarList RP {$$ = newast4(maketext("FunDec"), $1, $2, $3, $4); addfunc($1->info.name,$3->namearg,3,$1->line); strcpy($$->name,$1->info.name);}
	|ID LP RP {$$ = newast3(maketext("FunDec"), $1, $2, $3); addfunc($1->info.name,NULL, 3, $1->line); strcpy($$->name, $1->info.name);}
VarList:ParamDec COMMA VarList{$$ = newast3(maketext("VarList"), $1, $2, $3); $$->namearg=addnamelist($3, $1->name, $1->arraymark);}
	|ParamDec{$$ = newast1(maketext("VarList"), $1); $$->namearg = addnamelist($$, $1->name, $1->arraymark);}
ParamDec:Specifier VarDec{$$ = newast2(maketext("ParamDec"), $1, $2); $$->arraymark = $2->arraymark; strcpy($$->name, $2->name); $$->namearg = addnamelist($$, $2->name, $2->arraymark); addsymbol1($1->name, $$->namearg, $1->line);}

CompSt:LC DefList StmtList RC{$$ = newast4(maketext("CompSt"), $1, $2, $3, $4); strcpy($$->funcomptype, $3->funcomptype);}
StmtList:Stmt StmtList{$$ = newast2(maketext("StmtList"), $1, $2);
			if (strcmp($1->funcomptype, "int") == 0 || strcmp($1->funcomptype, "float") == 0) 
				strcpy($$->funcomptype, $1->funcomptype);
			if (strcmp($2->funcomptype, "int") == 0 || strcmp($2->funcomptype, "float") == 0) 
				strcpy($$->funcomptype, $2->funcomptype);
		}
	| {$$ = newast(maketext("null"));}
	;
Stmt:Exp SEMI{$$ = newast2(maketext("Stmt"), $1, $2);}
	|CompSt{$$ = newast1(maketext("Program"), $1);}
	|RETURN Exp SEMI{$$ = newast3(maketext("Stmt"), $1, $2, $3); strcpy($$->funcomptype, $2->Typename);}
	|IF LP Exp RP Stmt %prec LOWER_THAN_ELSE{$$ = newast5(maketext("Stmt"), $1, $2, $3, $4, $5);}
	|IF LP Exp RP Stmt ELSE Stmt{$$ = newast7(maketext("Stmt"), $1, $2, $3, $4, $5, $6, $7);}
	|WHILE LP Exp RP Stmt {$$ = newast5(maketext("Stmt"), $1, $2, $3, $4, $5);}
	;
DefList:Def DefList {$$ = newast2(maketext("DefList"), $1, $2); $$->namearg = linknamelist($1->namearg, $2->namearg);
						if (strcmp($1->funcomptype, "no") == 0 || strcmp($2->funcomptype, "no") == 0)
							strcmp($$->funcomptype, "no");
					}
	| {$$ = newast(maketext("null")); $$->namearg = NULL;}
	;
Def:Specifier DecList SEMI {$$ = newast3(maketext("Def"), $1, $2, $3); addsymbol1($1->name, $2->namearg, $1->line); $$->namearg = $2->namearg; strcpy($$->funcomptype, $2->funcomptype);}
;
DecList:Dec {$$ = newast1(maketext("DecList"), $1); $$->namearg = addnamelist($$, $1->name, $1->arraymark); strcpy($$->funcomptype, $1->funcomptype);}
	|Dec COMMA DecList {$$ = newast3(maketext("DecList"), $1, $2, $3); $$->namearg = addnamelist($3,$1->name, $1->arraymark);
							if (strcmp($1->funcomptype, "no") == 0 || strcmp($3->funcomptype, "no") == 0)
								strcpy($$->funcomptype, "no");
						}
	;
Dec:VarDec ASSIGNOP Exp {$$ = newast3(maketext("Dec"), $1, $2, $3); strcpy($$->name, $1->name); $$->arraymark = $1->arraymark; strcpy($$->funcomptype,"no");}
	|VarDec {$$ = newast1(maketext("Dec"), $1); strcpy($$->name, $1->name); $$->arraymark = $1->arraymark;}
	;

Exp:Exp ASSIGNOP Exp {
		$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,"int",0,0); error6($1->rmark,$1->line); error5($1,$3,$1->line);
		emit($1); //输出E1.place
		printf("="); //输出‘=’
		emit($3); //输出E2.place
		printf("\n");
	}
	|Exp AND Exp 	{
		$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,"int",0,0);
		$$->t = newtemp();//E.place等于新创建的临时变量
		emit($$);//输出E.place
		printf("=");//输出‘=’
		emit($1);//输出E1.place
		printf("&&");//输出‘&&’
		emit($3);//输出E2.place 
		printf("\n");
	}
	|Exp OR Exp {
		$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,"int",0,0);
		$$->t = newtemp();//E.place等于新创建的临时变量
		emit($$);//输出E.place
		printf("=");//输出‘=’
		emit($1);//输出E1.place
		printf("||");//输出‘||’
		emit($3);//输出E2.place
		printf("\n");
	}
	|Exp RELOP Exp {$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,"int",0,0);}
	|Exp PLUS Exp {
		$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,$1->Typename,0,0); error7($1,$3,$1->line);
		$$->t = newtemp();//E.place等于新创建的临时变量
		emit($$);//输出E.place
		printf("=");//输出‘=’
		emit($1);//输出E1.place
		printf("+");//输出‘+’
		emit($3);//输出E2.place
		printf("\n");
	}
	|Exp MINUS Exp {
		$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,$1->Typename,0,0); error7($1,$3,$1->line);
		$$->t=newtemp();//E.place等于新创建的临时变量
		emit($$);//输出E.place
		printf("=");//输出‘=’
		emit($1);//输出E1.place
		printf("-");//输出‘-’
		emit($3);//输出E2.place
		printf("\n");
	}
	|Exp STAR Exp {
		$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,$1->Typename,0,0); error7($1,$3,$1->line);
		$$->t=newtemp();//E.place等于新创建的临时变量
		emit($$);//输出E.place
		printf("=");//输出‘=’
		emit($1);//输出E1.place
		printf("*");//输出‘*’
		emit($3);//输出E2.place
		printf("\n");
	}
	|Exp DIV Exp {
		$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,$1->Typename,0,0); error7($1,$3,$1->line);
		$$->t=newtemp();//E.place等于新创建的临时变量
		emit($$);//输出E.place
		printf("=");//输出‘=’
		emit($1);//输出E1.place
		printf("/");//输出‘/’
		emit($3);//输出E2.place
		printf("\n");
	}
	|LP Exp RP {$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,$2->Typename,0,0);}
	|MINUS Exp {$$ = newast2(maketext("Exp"), $1,$2); setarraytype($$,$2->Typename,0,0);}
	|NOT Exp {$$ = newast2(maketext("Exp"), $1,$2); setarraytype($$,"int",0,0);}

	|ID LP Args RP {$$ = newast4(maketext("Exp"), $1,$2,$3,$4); error2($1->info.name,$1->line); setarraytype($$,$1->Typename,0,1); error11($1->info.name,$1->line); error9($1->info.name,$3->namearg,$1->line);}
	|ID LP RP {$$ = newast3(maketext("Exp"), $1,$2,$3); error2($1->info.name,$1->line); setarraytype($$,$1->Typename,0,1); error11($1->info.name,$1->line);}
	|Exp LB Exp RB {$$ = newast4(maketext("Exp"), $1,$2,$3,$4); setarraytype($$,$1->Typename,1,1);error12($3->Typename,$1->line); error10($1->name,$1->line);}
	|Exp DOT ID {$$ = newast3(maketext("Exp"), $1,$2,$3); setarraytype($$,checkstruct($1->Typename,$3->info.name,$1->line),0,1);}
	|ID {
		$$ = newast1(maketext("Exp"), $1); strcpy($$->name,$1->info.name); error1($$->name,$$->line); setarraytype($$,gettype($1->info.name),0,1);
		strcpy($$->id,	$1->info.name);	// E.place = ID的名字
		$$->ptag = 3;					// 记录E.place的类型为3
	}
	|INT {
		$$ = newast1(maketext("Exp"), $1); strcpy($$->name,"no"); setarraytype($$,"int",0,0);
		$$->i = $1->info.in;	// E.place = value
    	$$->ptag = 1;			// 记录E.place的类型为1
	}
	|FLOAT {
		$$ = newast1(maketext("Exp"), $1); strcpy($$->name,"no"); setarraytype($$,"float",0,0);
		$$->f = $1->info.fl;	// E.place = value
		$$->ptag = 2;			// 记录E.place的类型为2
	}
	;
Args:Exp COMMA Args {$$ = newast3(maketext("Args"), $1,$2,$3); $$->namearg=addnamelist($3,$1->Typename,$1->arraymark);}
	|Exp {$$ = newast1(maketext("Args"), $1); $$->namearg=addnamelist($$,$1->Typename,$1->arraymark);}
	;
%%

// 标记是否为数组类型，同时标记左右值
void setarraytype(struct ast *ast, char *name, int arraymark, int rmark)
{
	strcpy(ast->Typename, name);
	ast->arraymark = arraymark;
	ast->rmark = rmark;
}

// 添加新的变量名到名字列表
struct namelist *addnamelist(struct ast *ast, char *name, int arraymark)
{
	if (ast->namearg == NULL)
	{
		ast->namearg = (struct namelist *)malloc(sizeof(struct namelist));
		ast->namearg->next = NULL;
		ast->namearg->name = (char *)malloc(sizeof(char));
		ast->namearg->arraymark = arraymark;
		strcpy(ast->namearg->name, name);
	}
	else
	{
		struct namelist *temp = ast->namearg;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		struct namelist *tt = (struct namelist *)malloc(sizeof(struct namelist));
		tt->next = NULL;
		tt->name = (char *)malloc(sizeof(char));
		tt->arraymark = arraymark;
		strcpy(tt->name, name);
		temp->next = tt;
	}
	return ast->namearg;
}

// 连接两个名字列表
struct namelist *linknamelist(struct namelist *list1, struct namelist *list2)
{
	struct namelist *newlist = (struct namelist *)malloc(sizeof(struct namelist));
	struct namelist *temp = newlist;
	struct namelist *t1 = list1;
	while (t1 != NULL)
	{
		struct namelist *tt = (struct namelist *)malloc(sizeof(struct namelist));
		tt->name = (char *)malloc(sizeof(char));
		strcpy(tt->name, t1->name);
		temp->next = tt;
		temp = temp->next;
		t1 = t1->next;
	}
	t1 = list2;
	while (t1 != NULL)
	{
		struct namelist *tt = (struct namelist *)malloc(sizeof(struct namelist));
		tt->name = (char *)malloc(sizeof(char));
		strcpy(tt->name, t1->name);
		temp->next = tt;
		temp = temp->next;
		t1 = t1->next;
	}
	newlist = newlist->next;
	return newlist;
}

struct ast *newast(union Info v)
{
	struct ast *ast = (struct ast *)malloc(sizeof(struct ast));
	if (!ast)
	{
		printf("error type C at line %d", yylineno);
	}
	ast->info = v;
	ast->name = (char *)malloc(sizeof(char));
	ast->Typename = (char *)malloc(sizeof(char));
	ast->funcomptype = (char *)malloc(sizeof(char));
	strcpy(ast->funcomptype, "yes");
	return ast;
}

struct ast *newastinit(union Info info, int type, int line)
{
	struct ast *ast = newast(info);
	ast->line = line;
	ast->type = type;
	return ast;
}
// 分别初始化 int,float,string的不同格式
union Info makeint(int n)
{
	union Info info;
	info.in = n;
	return info;
}
union Info makefloat(float f)
{
	union Info info;
	info.fl = f;
	return info;
}
union Info maketext(const char *s)
{
	union Info info;
	strcpy(info.name, s);
	return info;
}
struct ast *newast1(union Info info, struct ast *a)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	ast->llength = 1;
	a->rlength = 0;
	return ast;
}
struct ast *newast2(union Info info, struct ast *a, struct ast *b)
{
	struct ast *ast = newast(info);
	ast->line = a->line; //对应当前语句的行号
	ast->lc = a;		 //在该树下的直接左端
	a->rc = b;			 //通过将兄弟节点改为二叉树的右端
	ast->llength = 2;	 //记录节点的个数，树根的直接左端
	a->rlength = 1;		 //每一层的右端
	b->rlength = 0;
	return ast;
}
struct ast *newast3(union Info info, struct ast *a, struct ast *b, struct ast *c)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	a->rc = b;
	ast->llength = 3;
	a->rlength = 2;
	b->rlength = 1;
	b->rc = c;
	c->rlength = 0;
	return ast;
}
struct ast *newast4(union Info info, struct ast *a, struct ast *b, struct ast *c, struct ast *d)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	a->rc = b;
	ast->llength = 4;
	a->rlength = 3;
	b->rlength = 2;
	b->rc = c;
	c->rlength = 1;
	c->rc = d;
	d->rlength = 0;
	return ast;
}
struct ast *newast5(union Info info, struct ast *a, struct ast *b, struct ast *c, struct ast *d, struct ast *e)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	a->rc = b;
	ast->llength = 5;
	a->rlength = 4;
	b->rlength = 3;
	b->rc = c;
	c->rlength = 2;
	c->rc = d;
	d->rlength = 1;
	d->rc = e;
	e->rlength = 0;
	return ast;
}
struct ast *newast7(union Info info, struct ast *a, struct ast *b, struct ast *c, struct ast *d, struct ast *e, struct ast *f, struct ast *g)
{
	struct ast *ast = newast(info);
	ast->line = a->line;
	ast->lc = a;
	a->rc = b;
	ast->llength = 7;
	a->rlength = 6;
	b->rlength = 5;
	b->rc = c;
	c->rlength = 4;
	c->rc = d;
	d->rlength = 3;
	d->rc = e;
	e->rlength = 2;
	e->rc = f;
	f->rc = g;
	f->rlength = 1;
	g->rlength = 0;
	return ast;
}

/* 释放树的空间，考虑搜索到的位置 */
void freetree(struct ast *t)
{ 
	if (t->llength != 0)
		freetree(t->lc);
	if (t->rlength != 0)
		freetree(t->rc);
	free(t);
}

void tracetree(struct ast *t, int l)
{
	int i;
	if (strcmp(t->info.name, "null") != 0) // 当记录的不是null时
		for (i = 0; i < l; ++i)	// 对应所在层次
			printf("  ");

	if (t == NULL)
	{
		printf("null\n");
		return;
	}
	if (t->type == INT)
		printf("INT:%d\n", t->info.in);
	else if (t->type == FLOAT)
		printf("FLOAT:%f\n", t->info.fl);
	else if (t->type == ID)
		printf("ID:%s\n", t->info.name);
	else if (t->type == TYPE)
		printf("TYPE:%s\n", t->info.name);
	else if (t->type != 0) // 对应标号的记录值，最开始是从258开始记录的
	{ 
		printf("%s\n", name[t->type - 258]);
	}
	else if (strcmp(t->info.name, "null") == 0) {}
	else
	{
		printf("%s(%d)\n", t->info.name, t->line);
	}
	if (t->llength != 0)
		tracetree(t->lc, l + 1); //需要空格空出的位置
	if (t->rlength != 0)
		tracetree(t->rc, l);
}

int main(int argc, char **argv)
{
	initsymbollist();
	if (argc <= 1)
		return 1;
	FILE *f = fopen(argv[1], "r");
	if (!f)
	{
		perror(argv[1]);
		return 1;
	}
	yyrestart(f);
	yyparse();
	return 0;
}

void yyerror(char *msg)	// 错误信息
{ 
	fprintf(stderr, "Error Type B at line %d: %s\n", yylineno, msg);
}