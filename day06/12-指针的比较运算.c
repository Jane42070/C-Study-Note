#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 指针的比较运算
// 对数组来说，有意义，可以得到元素存储的先后顺序
// 对常量来说，无意义
int main(int argc, char *argv[])
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int *p = &a[0] - 1;

	if (p > a)
		printf("成立\n");
	else if (p < a)
		printf("不成立\n");
	else
		printf("== \n");

	printf("%d\n", *p+2);

	return 0;
}
