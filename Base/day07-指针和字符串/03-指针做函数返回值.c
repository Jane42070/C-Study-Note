#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 指针做函数返回值，不能返回局部变量的地址值

// 全局变量
int m = 100;

int *test_func(int a, int b);

int main(int argc, char *argv[])
{
	int *ret;
	ret = test_func(4, 6);

	printf("ret: %d\n", *ret);
	return 0;
}

int *test_func(int a, int b)
{
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	// 局部变量
	int c = a + b;

	int *p = &c;

	// 局部变量在函数调用结束时会随着栈帧的消失而消失掉
	// 不能返回局部变量的地址值
	// return &c;

	return p;
}
