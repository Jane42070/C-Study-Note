#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a = 345;

	// 万能指针，泛型指针
	// 可以接受任意变量的地址，但是，在使用时必须借助“强转”具体化指针类型
	void *p;

	p = &a;

	// 强转
	printf("%d\n", *(int *)p);
	printf("%p\n", &a);
	printf("%p\n", p);

	return 0;
}
