#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main01(int argc, char *argv[])
{
	// 指针大小与类型无关，只与当前使用的平台架构有关
	// 32 位：4 字节；64 位：8 字节
	printf("sizeof(int *) = %lu\n", sizeof(int *));
	printf("sizeof(short *) = %lu\n", sizeof(short *));
	printf("sizeof(char *) = %lu\n", sizeof(char *));
	printf("sizeof(long *) = %lu\n", sizeof(long *));
	printf("sizeof(double *) = %lu\n", sizeof(double *));
	printf("sizeof(long long *) = %lu\n", sizeof(long long*));

	// 万能指针，泛型
	printf("sizeof(void *) = %lu\n", sizeof(void *));

	// 野指针
	// 没有一个有效的地址空间指针
	/** int *p; */
	/** *p = 1000; */
	/** printf("*p = %d\n", *p); */
	// p 变量有一个值，但该值不是可访问的内存区域
	// 0-255 是留给操作系统使用的，不可被访问
	/** int *q = 10; */
	/** *q = 2000; */
	/** printf("%d\n", *q); */
	int m = 20;
	int *q;
	q = &m;
	*q = 2000;
	printf("%p\n", q);
	printf("%d\n", m);
	return 0;
}

int main(int argc, char *argv[])
{
	// NULL == 0
	int *p = NULL;
	// 0 地址不能被使用
	if (p != NULL) {
		*p = 300;
		printf("%p\n", p);
	}
	// *p 时 p 对应的存储空间一定是一个无效的访问区域
	printf("p = NULL, *p = %p\n", p);
	return 0;
}
