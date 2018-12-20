#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

union Info { //每个节点对应的结构体
	char name[100];
	int in;
	float fl;
};

struct namelist // 名字列表
{
	char *name;
	int arraymark;
	struct namelist *next;
};

struct ast //二叉树
{
	int line;
	union Info info;
	int arraymark; //数字标记，是否为数组
	int rmark;	 //0为左值，1为右值
	char *typename;
	char *name;		   //定义的综合属性变量，对于specifier来说name=typename
	char *funcomptype; //函数语句体的类型，如int,float等
	int type;		   //类型
	int rlength;	   //用于标记二叉树的右端部分
	int llength;	   //用于标记二叉树的左端部分
	struct ast *lc;	//子树
	struct ast *rc;
	struct namelist *namearg; //用于在参数定义时的多个变量

	/*用于生成中间代码的变量,place的4种类型，*/
	int i;		  //Integer
	float f;	  //FLOAT
	char id[100]; //变量名ID
	int t;		  //临时变量t编号

	int ptag; //用以标志place的类型1,2,3,4
};
//标记是否为数组类型，同时标记左右值
void setarraytype(struct ast *ast, char *name, int arraymark, int rmark);
//添加新的变量名到名字列表
struct namelist *addnamelist(struct ast *ast, char *name, int arraymark);
//建立空节点（含有null的节点）
struct ast *newast(union Info v);
//初始化节点信息
struct ast *newastinit(union Info info, int type, int line);
//分别建立不同类型的节点
union Info makeint(int n);
union Info makefloat(float f);
union Info maketext(const char *s);
//对应参数不同的种类和数目来建立树
struct ast *newast1(union Info info, struct ast *a);
struct ast *newast2(union Info info, struct ast *a, struct ast *b);
struct ast *newast3(union Info info, struct ast *a, struct ast *b, struct ast *c);
struct ast *newast4(union Info info, struct ast *a, struct ast *b, struct ast *c, struct ast *d);
struct ast *newast5(union Info info, struct ast *a, struct ast *b, struct ast *c, struct ast *d, struct ast *e);
struct ast *newast7(union Info info, struct ast *a, struct ast *b, struct ast *c, struct ast *d, struct ast *e, struct ast *f, struct ast *g);
//释放树
void freetree(struct ast *t);
//遍历树
void tracetree(struct ast *t, int l);
//连接两个名字列表
struct namelist *linknamelist(struct namelist *list1, struct namelist *list2);
#endif //HEAD_H_INCLUDED
