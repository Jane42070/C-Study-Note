#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main01(int argc, char *argv[])
{
	char str[] = "hello\0world";

	printf("sizeof(str) -> %lu\n", sizeof(str));

	// strlen(const char *__s)
	// 1. 求长度的字符串
	// strlen() -> 有效字符个数
	// 遇到 \0 结束
	printf("strlen(str) -> %lu\n", strlen(str));

	return 0;
}

// 实现 strlen 函数方法
int main(int argc, char *argv[])
{
	char str[] = "hello\0world";

	int i = 0;

	while (str[i] != '\0') {
		i++;
	}

	printf("strlen(str) -> %d\n", i);

	return 0;
}
