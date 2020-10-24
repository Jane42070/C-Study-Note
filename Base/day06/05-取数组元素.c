#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	// 数组名是地址常量 -- 不可以被赋值
	char arr[] = {'h','e','l','l','o',' ','w','o','r','l','d'};

	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int b[3];
	//  不可被修改
	// b = a;

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
		printf("%d\t", a[i]);
	}
	printf("\n");
	/** printf("%s\n", arr); */
	// 取数组元素
	// *：取引用；+ 1：加一个 int 类型（4 字节）
	// printf("%d\n", a[i]); ==	*(a + i)
	printf("a[0] = %d\n", *(a + 0));
	printf("a[1] = %d\n", *(a + 1));
	printf("a[2] = %d\n", *(a + 2));
	printf("a[3] = %d\n", *(a + 3));
	printf("a[4] = %d\n", *(a + 4));

	// p 的内存单元中存储 a 数组的地址
	int *p = a;

	for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
		/** printf("%d\t", *(p + i)); */
		// p[i] == *(p + i) == *p + i
		printf("%d\t", p[i]);
	}

	return 0;
}
