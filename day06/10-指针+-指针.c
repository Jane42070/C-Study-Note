#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 指针加减指针
int main01(int argc, char *argv[])
{
	int a = 10;
	int b = 20;

	int *p = &a;
	int *q = &b;

	// error
	/** p + q; */

	printf("p = %p\n", p);
	printf("q = %p\n", q);
	// 指针 - 指针
	// 对普通变量来说，语法运算，无实际意义
	printf("p - q = %ld\n", p - q);

	return 0;
}

int main(int argc, char *argv[])
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	int *p = &a[5];

	// 数组来说：偏移过的元素个数
	printf("%ld\n", p - &a[3]);

	p = a;

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
		printf("%d\t", *p);
		p++;
	}
	putchar('\n');
	printf("len(a) = %ld\n", p - a);

	return 0;
}
