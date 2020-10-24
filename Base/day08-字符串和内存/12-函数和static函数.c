#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

// 全局函数：
// 函数类型+函数名+函数体

// static 函数（静态函数）
// static+函数类型+函数名+函数体
// 只能够在本文件内部使用

static void test1()
{
	static int b = 10;

	printf("b = %d\n", b);
}

int main(int argc, char *argv[])
{
	test1();
	return 0;
}
