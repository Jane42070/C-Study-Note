#include <stdio.h>

int main()
{
	// 数据溢出
	char ch = -128-2;
	char CH = 127+2;
	printf("%d\n", ch);
	printf("%d\n", CH);
}
