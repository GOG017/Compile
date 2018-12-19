#ifndef SYMBOLTABLE_H_INCLUDED
#define SYMBOLTABLE_H_INCLUDED
// 定义参数表
struct arg
{
	char *name;
	char *type_name;  //定义类型
	int functype;	 //0：普通变量，1：结构体变量， 2：数组变量， 3：函数变量
	struct arg *next; //指向下一个参数结构体
};

// 定义符号表
struct symbol
{
	char *name;
	char *type_name;
	int functype;
	struct arg *arg;
	struct symbol *next;
} * symbollist;

void insertsym1(char *name, char *type_name, int arraytype); // 插入普通变量和数组变量到符号表中

void insertsym2(char *name, char *type_name, int functype, struct arg *arg); // 插入结构体变量和函数变量到符号表中（带有参数的部分）

int lookup(char *name); // 查询符号是否在符号表中

char *checkstruct(char *name, char *name2, int line); // 判断是否为结构体

int checkargs(char *name, struct namelist *namelist); // 检查参数表的情况

void symbollisttrace(); // 遍历符号表

void addsymbol1(char *name, struct namelist *namelist, int line); // 插入普通变量到符号表中

void initsymbollist(); // 初始化符号表

void changefunctype(char *name, char *type_name); //修改函数和结构体的functype

struct arg *getarg(struct namelist *namelist); // 将namelist名字表转换为参数列表

void addfunc(char *name, struct namelist *namelist, int mark, int line); // 添加函数

void addstruct(char *name, struct namelist *namelist, int mark, int line); // 添加结构体

int getfunctype(char *name); // 获得符号的functype

char *gettype(char *name); // 获得符号的type名字

void freesymbollist(); // 清空符号列表

int newtemp(); //创建临时变量

void emit(struct ast *tp); //输出四元式

#endif // SYMBOLTABLE_H_INCLUDED
