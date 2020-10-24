#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 数据类型对指针的作用

/*
int main(int argc, char *argv[])
{
	int a = 0x12345678;

	// 间接引用：
	// 决定了从指针存储的地址开始，向后读取的字节数
	int *p = &a;
	char *p = &a;
	short *p = &a;

	printf("sizeof(a) = %lu\n", sizeof(a));
	printf("a = %d\n", *p);
	printf("a = %p\n", *p);
	printf("&a = %p\n", p);
	return 0;
}
int main(int argc, char *argv[])
{
	int a = 0x12345678;

	// 加减运算：
	// 决定了指针进行+/- 1 操作向后加过的字节数
	int *p = &a;
	char *p = &a;
	short *p = &a;

	printf("&p = %p\n", &p);
	printf("a = %p\n", &a);

	printf("p = %p\n", p);
	printf("p + 1 = %p\n", p + 1);
	return 0;
}
*/
