#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main01(int argc, char *argv[])
{
	char str[] = "Guten Tag\n";

	puts(str);

	// puts(const char *)
	// 将一个字符串写出到屏幕
	// 1. 待写出到屏幕的字符串
	// 返回值：成功：非负数，失败：-1
	// 输出字符串后自动加\n
	printf("puts() -> %d\n", puts("hello world"));

	return 0;
}

int main(int argc, char *argv[])
{
	// fputs(const char *restrict, FILE *restrict)
	// 1. 待写出到屏幕的字符串。	屏幕-->标准输出：stdout
	// 参数：写出位置 stdout
	// 返回值：成功：非负数，失败：-1
	// 输出字符串不自动加\n
	int cancel = fputs("hello world", stdout);
	printf("fputs() -> %d\n", cancel);
	return 0;
}
