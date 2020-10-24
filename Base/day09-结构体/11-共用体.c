#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 整个共用体的所有成员共用一块内存
union vars
{
	double a;
	float b;
	int c;
	// 40
	int e[10];
	short d;
	char f;
	// 对 double 8 字节 对齐
	// 8 * 2
	// 12 有效字节 4 个无效
	char arr[12];
}var;
// 缺点：乱
// 优点：省内存

int main(int argc, char *argv[])
{
	printf("sizeof(var) = %lu\n", sizeof(var));
	var.a = 100;
	var.b = 3.14;
	var.c = 500;
	printf("var.a = %f\n", var.a);
	printf("var.b = %f\n", var.b);
	printf("var.c = %d\n", var.c);
	return 0;
}
