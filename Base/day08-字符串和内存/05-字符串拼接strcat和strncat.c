#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	char str1[20] = "hello";
	char str2[] = "world";

	// 拼接两个字符串，前提是 dest 空间足够！
	char *p = strcat(str1, str2);

	printf("%s\n", p);
	printf("%s\n", str1);

	// 拼接 n 个字符串
	char *q = strncat(str1, str2, 2);
	printf("%s\n", q);

	return 0;
}
