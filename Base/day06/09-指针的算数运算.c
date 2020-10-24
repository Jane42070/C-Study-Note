#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 普通指针变量+-整数
int main01(int argc, char *argv[])
{
	int a = 10;
	int b = 20;

	int *p = &a;

	// 指针 * / %：error！
	/** printf("%p\n", *(void *)(p * 20)); */

	printf("p = %p\n", (int *)p);
	printf("p - 1 = %p\n", (int *)p - 1);
	printf("\n");
	printf("p = %p\n", (char *)p);
	printf("p - 1 = %p\n", (char *)p - 1);
	return 0;
}

// 指针在数组中+-整数
int main(int argc, char *argv[])
{
	short arr[] = {1, 3, 5, 8};
	short *p = arr;
	// 或者直接指向指定元素
	short *q = &arr[3];

	printf("%d\n", *(p + 3));
	printf("%d\n", *(p + 1));

	printf("%d\n", *(q - 3));

	// 数组+-
	printf("%p\n", arr);
	printf("%p\n", arr + 1);

	// &数组 == 整个数组的地址
	printf("%p\n", &arr);
	// &数组 + 1 == 数组长度加上数组的类型（short）长度
	printf("%p\n", &arr + 1);

	return 0;
}
