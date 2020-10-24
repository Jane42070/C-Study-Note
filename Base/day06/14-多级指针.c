#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a = 0;
	// 一级指针是变量的地址
	int *p = &a;

	// 二级指针是一级指针的地址
	int **pp = &p;

	// 三级指针是二级指针的地址
	int ***ppp = &pp;

	// 四级指针是三级指针的地址
	int ****pppp = &ppp;

	return 0;
}
