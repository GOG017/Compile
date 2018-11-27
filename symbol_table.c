#include "symbol_table.h"
#include <stdio.h>
#include <string.h>

void insertsym1(char *name, char *type_name, int arraytype) // 插入普通变量和数组变量到符号表中
{
	struct symbol *sym = (struct symbol *)malloc(sizeof(struct symbol));
	sym->name = (char *)malloc(sizeof(char));
	strcpy(sym->name, name);
	sym->type_name = (char *)malloc(sizeof(char));
	strcpy(sym->type_name, type_name);
	if (arraytype == 1)
		sym->functype = 2;
	else
		sym->functype = 0;
	sym->next = NULL;
	struct symbol *ssym = symbollist;
	while (ssym->next != NULL)
	{
		ssym = ssym->next;
	}
	ssym->next = sym;
}

void insertsym2(char *name, char *type_name, int functype, struct arg *arg) // 插入结构体变量和函数变量到符号表中（带有参数的部分）
{
	struct symbol *sym = (struct symbol *)malloc(sizeof(struct symbol));
	sym->name = (char *)malloc(sizeof(char));
	strcpy(sym->name, name);
	sym->type_name = (char *)malloc(sizeof(char));
	strcpy(sym->type_name, type_name);
	sym->functype = functype;
	sym->arg = arg;
	sym->next = NULL;
	struct symbol *ssym = symbollist;
	while (ssym->next != NULL)
		ssym = ssym->next;
	ssym->next = sym;
}

int lookup(char *name)
{
	int flag = 0;
	struct symbol *sym = symbollist;
	sym = sym->next;
	while (sym != NULL)
	{
		if (strcmp(name, sym->name) == 0)
			flag = 1;
		if (flag)
			break;
		sym = sym->next;
	}
	return flag;
}

char *checkstruct(char *name, char *name2, int line) // 判断是否为结构体
{
	int flag1, flag2;
	flag1 = flag2 = 0;
	struct symbol *sym = symbollist;
	sym = sym->next;
	char *p = "INT";
	while (sym != NULL)
	{
		if (strcmp(name, sym->name) == 0 && sym->functype == 1)
		{
			flag1 = 1;
			struct arg *arg = sym->arg;
			while (arg != NULL)
			{
				if (strcmp(arg->name, name2) == 0)
				{
					flag2 = 1;
					strcmp(p, arg->type_name);
				}
				arg = arg->next;
				if (flag2 == 1)
					break;
			}
		}
		if (flag1 == 1)
			break;
		sym = sym->next;
	}
	if (!flag1) error13(line);
	else if (!flag2) error14(name2, line);
	return p;
}

int checkargs(char *name, struct namelist *namelist) // 检查参数表的情况,参数个数及类型是否一致
{
	int flag1 = 0;
	int p = 1;
	struct symbol *sym = symbollist;
	sym = sym->next;
	while (sym != NULL)
	{
		if (strcmp(name, sym->name) == 0)
		{
			flag1 = 1;
			struct arg *arg = sym->arg;
			struct namelist *nl = namelist;
			while (arg != NULL && nl != NULL)
			{
				if (strcmp(arg->type_name, nl->name) != 0)
					p = 0;
				if (!p)
					break;
				arg = arg->next;
				nl = nl->next;
			}
			if (nl != NULL || arg != NULL)
				p = 0;
		}
		if (flag1 == 1)
			break;
		sym = sym->next;
	}
	return p;
}

void symbollisttrace() // 遍历符号表
{
	struct symbol *sym = symbollist;
	sym = sym->next;
	while (sym != NULL)
	{
		if (sym->functype == 3)
		{
			printf("func: name:%s type:%s functype:%d\n", sym->name, sym->type_name, sym->functype);
			struct arg *arg = sym->arg;
			while (arg != NULL)
			{
				printf("name:%s type:%s\n", arg->name, arg->type_name);
				arg = arg->next;
			}
			printf("\n");
		}
		else if (sym->functype == 1)
		{
			printf("struct: name:%s type:%s functype:%d\n", sym->name, sym->type_name,
				   sym->functype);
			struct arg *arg = sym->arg;
			while (arg != NULL)
			{
				printf("name:%s type:%s\n", arg->name, arg->type_name);
				arg = arg->next;
			}
			printf("\n");
		}
		else
			printf("name:%s type:%s functype:%d\n", sym->name, sym->type_name,
				   sym->functype);
		sym = sym->next;
	}
}

void addsymbol1(char *name, struct namelist *namelist, int line) // 插入普通变量到符号表中,这里的name是类型
{
	struct namelist *nl = namelist;
	while (nl != NULL)
	{
		if (lookup(nl->name) == 0)
			insertsym1(nl->name, name, nl->arraymark);
		else
			error3(nl->name, line);
		nl = nl->next;
	}
}

void initsymbollist() // 初始化符号表,测试使用
{
	symbollist = (struct symbol *)malloc(sizeof(struct symbol));
	symbollist->name = (char *)malloc(sizeof(char));
	symbollist->type_name = (char *)malloc(sizeof(char));
	symbollist->next = NULL;
	struct namelist *namelist = (struct namelist *)malloc(sizeof(struct namelist));
	insertsym1("__w__", "int", 0);
	addfunc("read", NULL, 3, 0);
	changefunctype("read", "int");
	namelist->name = "__w__";
	addfunc("write", namelist, 3, 0);
	changefunctype("write", "int");
}

void changefunctype(char *name, char *type_name) //修改函数和结构体的functype
{
	int flag = 0;
	struct symbol *sym = symbollist;
	sym = sym->next;
	while (sym != NULL)
	{
		if (strcmp(name, sym->name) == 0)
		{
			flag = 1;
			strcpy(sym->type_name, type_name);
		}
		if (flag)
			break;
		sym = sym->next;
	}
}

struct arg *getarg(struct namelist *namelist) // 将namelist名字表转换为参数列表
{
	struct arg *arg = (struct arg *)malloc(sizeof(struct arg));
	struct arg *temp = arg;
	struct namelist *nl = namelist;
	while (nl != NULL)
	{
		struct arg *tt = (struct arg *)malloc(sizeof(struct arg));
		tt->name = (char *)malloc(sizeof(char));
		strcpy(tt->name, nl->name);
		tt->type_name = (char *)malloc(sizeof(char));
		strcpy(tt->type_name, gettype(nl->name));
		tt->functype = getfunctype(nl->name);
		nl = nl->next;
		temp->next = tt;
		temp = temp->next; //使用链表的尾部插法，能够将其不断延续下去，同时是有头节点的部分
	}
	return arg->next;
}

void addfunc(char *name, struct namelist *namelist, int mark, int line) // 添加函数到符号表中
{
	if (lookup(name) == 0)
	{
		char *initname = "int";
		insertsym2(name, initname, mark, getarg(namelist));
	}
	else error4(name, line);
}

void addstruct(char *name, struct namelist *namelist, int mark, int line) // 添加结构体
{
	if (lookup(name) == 0)
	{
		char *initname = "int";
		insertsym2(name, initname, mark, getarg(namelist));
	}
	else
		error16(name, line);
}

int getfunctype(char *name) // 获得符号的functype
{
	int flag = 0;
	int type = -1;
	struct symbol *sym = symbollist;
	sym = sym->next;
	while (sym != NULL)
	{
		if (strcmp(name, sym->name) == 0)
		{
			flag = 1;
			type = sym->functype;
			// break;
		}
		if (flag)
			break;
		sym = sym->next;
	}
	return type;
}

char *gettype(char *name) // 获得符号的type名字
{
	int flag = 0;
	char *type_name;
	type_name = (char *)malloc(sizeof(char));
	struct symbol *sym = symbollist;
	sym = sym->next;
	while (sym != NULL)
	{
		if (strcmp(name, sym->name) == 0)
		{
			flag = 1;
			strcpy(type_name, sym->type_name);
			// break;
		}
		if (flag)
			break;
		sym = sym->next;
	}
	return type_name;
}

void freesymbollist() // 清空符号列表
{
	while (symbollist != NULL)
	{
		free(symbollist->name);
		free(symbollist->type_name);
		struct arg *arg = symbollist->arg;
		while (arg != NULL)
		{
			free(arg->name);
			free(arg->type_name);
			struct arg *temp = arg;
			arg = arg->next;
			free(temp);
		}
		struct symbol *tt = symbollist;
		symbollist = symbollist->next;
		free(tt);
	}
}
