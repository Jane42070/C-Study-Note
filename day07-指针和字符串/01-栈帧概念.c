#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
// 函数声明

// 实参传值
// 函数调用期间，实参将自己的值，拷贝了一份给形参
int swap(int a, int b);
// 实参传地址
// 函数调用期间，实参将地址值，拷贝了一份给形参
// 地址值 --> 在 swap2 函数栈帧内部，修改了 main 函数栈帧内部的局部变量值
int swap2(int *a, int *b);

int main(int argc, char *argv[])
{
	// 栈帧：
	//  当函数调用时，系统会在 stack 空间上申请一块内存区域，
	//  用来供函数调用，主要存放形参和局部变量（定义在函数内部）
	//  当函数调用结束，这块内存区域自动被释放（消失）
	int m = 20;
	int n = 50;

	printf("m = %d\n", m);
	printf("n = %d\n", n);

	// swap(m, n);
	swap2(&m, &n);
	printf("===============\n");

	printf("m = %d\n", m);
	printf("n = %d\n", n);

	return 0;
}

int swap(int a, int b)
{
	int temp = 0;

	temp = a;
	a = b;
	b = temp;

	return 0;
}

int swap2(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

	return 0;
}
