#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a = 10;
	int *p = &a;

	printf("%p\n", p);

	// 指针的解引用
	// *p：将 p 变量的内容取出，当成地址看待，找到该地址的内存空间
	// 如果做左值：存数据到空间中
	// 如果做右值：取空间中的内容
	*p = 250;

	printf("%d\n", a);
	return 0;
}
