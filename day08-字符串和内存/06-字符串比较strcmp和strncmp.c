#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	char str1[] = "hello world";
	char str2[] = "helloz";

	int ret = strcmp(str1, str2);

	printf("%d\n", ret);

	printf("%s\n", ret ? "str1 > str2" : "str1 < str2");

	ret = strncmp(str1, str2, 5);

	printf("%d\n", ret);

	printf("%s\n", ret == 0 ? "str1[:5] = str2[:5]" : "str1 != str2");

	return 0;
}
