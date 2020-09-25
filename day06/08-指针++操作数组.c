#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

void test();

// 使用指针++操作数组元素
int main(int argc, char *argv[])
{
	int arr[] = {1, 10, 20, 40, 2, 5, 90, 50, 30};
	int *p = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("&arr[%d] = %p\t", i, p);
		printf("arr[%d] = %d\n", i, *p);
		p++;
	}

	printf("len(arr) = %d\n", (int)(p - arr));
	putchar('\n');

	fputs("课堂作业：\n", stdout);
	test();
	return 0;
}

// 课堂作业
// 用 *(p + i) 初始化未初始化的 arr[10] 数组
void test()
{
	int arr[10];

	int *p = arr;

	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; ++i) {
		*(p + i) = i;
	}	// <-- p 指针指向数组首地址

	for (int i = 0; i < len; ++i) {
		printf("arr[%d] = %d\n", i, *p);
		p++;
	}	// <-- p 指针指向无效的区域，野指针

	printf("len(arr) = %d\n", len);
}
