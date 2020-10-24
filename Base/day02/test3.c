#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	// 变量定义
	/** int a; */

	// 显示的做变量 b 的声明
	extern int b;

	// 变量定义
	int a = 66;

	// 变量使用、变量赋值
	a = 56;

	printf("%d\n", a);

	return 0;
}
