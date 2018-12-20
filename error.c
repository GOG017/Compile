#include <stdio.h>
#include <string.h>
#include "head.h"
#include "symbol_table.h"

// 变量使用时未定义
void error1(char *name, int line)
{
	int flag = lookup(name);
	if (!flag)
		printf("Error type 1 at Line %d: Undefined variable \"%s\"\n", line, name);
}

// 函数调用时未定义
void error2(char *name, int line)
{
	int flag = lookup(name);
	if (!flag)
		printf("Error type 2 at Line %d: Undefined function \"%s\"\n", line, name);
}

// 变量出现重复定义或者与之前的结构体名字重复
void error3(char *name, int line)
{
	printf("Error type 3 at Line %d: Redefined variable \"%s\"\n", line, name);
}

// 函数出现重复定义
void error4(char *name, int line)
{
	printf("Error type 4 at Line %d: Redefined function \"%s\"\n", line, name);
}

// 赋值号两边的表达式类型不匹配
void error5(struct ast *ast1, struct ast *ast2, int line)
{
	//printf("%d = %d\n", ast1->arraymark, ast2->arraymark);
	if (strcmp(ast1->Typename, ast2->Typename) != 0 || ast1->arraymark != ast2->arraymark)
		printf("Error type 5 at Line %d: Type mismatched for assignment\n", line);
}

// 赋值号左边出现一个只有右值的表达式
void error6(int type, int line)
{
	if (!type)
		printf("Error type 6 at Line %d: The left-hand side of an assignment must be a variable\n", line);
}

// 操作数类型不匹配或者与操作符不匹配
void error7(struct ast *ast1, struct ast *ast2, int line)
{
	if (strcmp(ast1->Typename, ast2->Typename) != 0 || ast1->arraymark != ast2->arraymark)
		printf("Error type 7 at Line %d: Type mismatched for operands \n", line);
}

// return语句的返回类型与函数定义的返回类型不匹配
void error8(char *name, char *name2, int line)
{
	if (strcmp(name, name2) != 0)
		printf("Error type 8 at Line %d: Type mismatched for return\n", line);
}

// 函数调用时实参和形参的数目或者类型不匹配
void error9(char *name, struct namelist *namelist, int line)
{
	if (getfunctype(name) == 3)
		if (checkargs(name, namelist) == 0)
			printf("Error type 9 at Line %d: Function is not applicable for arguments\n", line);
}

// 对非数组型变量使用【】（数字访问）操作符
void error10(char *name, int line)
{
	if (getfunctype(name) != 2)
		printf("Error type 10 at Line %d: \"%s\" is not an array\n", line, name);
}

// 对普通变量使用（）（函数调用）操作符
void error11(char *name, int line)
{
	if (getfunctype(name) != 3 && getfunctype(name) >= 0)
		printf("Error type 11 at Line %d: \"%s\" is not a function\n", line, name);
}

// 数组访问操作符[]出现非整数
void error12(char *Typename, int line)
{
	if (strcmp(Typename, "int") != 0)
		printf("Error type 12 at Line %d: Type is not an integer\n", line);
}

// 对非结构体型变量使用.操作符
void error13(int line)
{
	printf("Error type 13 at Line %d: Illegal use of \".\"\n", line);
}

// 访问结构体中未定义的域
void error14(char *name, int line)
{
	printf("Error type 14 at Line %d: Non-existent field \"%s\"\n", line, name);
}

// 结构体中域名定义重复
void error15(char *name, int line)
{
	if (strcmp(name, "no") == 0)
		printf("Error type 15 at Line %d: Redefined field \n", line);
}

// 结构体中的名字与之前定义过的结构体或者变量名字重复
void error16(char *name, int line)
{
	printf("Error type 16 at Line %d: Redefined struct \"%s\"\n", line, name);
}

// 直接使用为定义过的结构体来定义变量
void error17(char *name, int line)
{
	if (getfunctype(name) != 1)
		printf("Error type 17 at Line %d: Undefined structure\"%s\"\n", line, name);
}
