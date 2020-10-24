#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

void test();

int main01(int argc, char *argv[])
{
	// volatile 告诉编译器不对 a 变量做优化，a 变量随时会因为运算改变
	// 直接从原始地址读取变量的内容
	volatile const int a = 20;

	// 不能被修改
	// a = 500;
	
	int *p = (int *)&a;

	*p = 400;

	printf("a = %d\n", a);
	printf("p = %d\n", *p);

	test();

	return 0;
}


void test()
{
	volatile const int a = 3;

	int* b = (int*) &a;

	 

	printf("a = %d, *b = %d\n", a, *b);

	*b = 5;

	printf("a = %d, *b = %d\n", a, *b);
}

// const 修饰指针
// const 向右修饰，被修饰的部分即为只读
int main(int argc, char *argv[])
{
	int a = 10;
	int b = 30;

	// const int *p == int const *p
	// int *p == (int *) p
	const int *p = &a;

	// 可以修改 p 变量的值，不能修改 *p
	// *p = 500; x
	p = &b;

	printf("%d\n", *p);

	// int * const q;
	int * const q = &a;

	// 可以修改 *q，不可以修改 q
	*q = 300;
	// q = &b;

	printf("%d\n", a);

	// 都不可以修改
	const int *const o;


	return 0;
}
