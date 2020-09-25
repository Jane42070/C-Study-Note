#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	char str[] = "hello world";

	// 字符串中查找字符
	// return 字符在字符串中的地址;
	printf("ret: %s\n", strchr(str, 'o'));

	// 字符串中查找字符
	// 从右往左找
	// return 字符在字符串中的地址;
	printf("ret: %s\n", strrchr(str, 'o'));

	// 在字符串 str 中，找子串 substr 第一次出现的位置
	// return 子串在字符串中第一次出现的地址;
	// 没有则返回 NULL
	printf("ret: %s\n", strstr(str, "world"));

	return 0;
}
