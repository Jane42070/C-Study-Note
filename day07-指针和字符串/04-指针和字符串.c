#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// cSpell:disable
// 实现 strcmp()
// 比较字符串大小
int my_strcmp(char *str1, char *str2);

// 实现 strcpy()
// 字符串拷贝
void strcopy(char *str1, char *str2);

// 实现 strch()
// 字符串去空格
void my_strch(char *str1, char *str2);

// 实现 strstr()
// 字符串中子串出现的次数
int my_strstr(char *str1, char *str2);

int main(int argc, char *argv[])
{
	char str1[] = "hello world";
	char m[] = "hello";

	char *str2 = "hello";
	char *n = "hello";
	// char *n = {'h', 'e', 'l', 'l', 'o'}; X

	printf("str1: %p\n", &str1);
	printf("m: %p\n", &m);

	printf("str2: %p\n", str2);
	printf("n: %p\n", n);

	int ret = my_strcmp(str1, str2);
	printf("ret = %d\n", ret);

	char arr[] = "hello";
	char dst[100] = {0};

	strcopy(arr, dst);

	printf("dst = %s\n", dst);

	my_strch(str1, dst);

	printf("dst = %s\n", dst);

	char *str3 = "lo";
	ret = my_strstr(str1, str3);
	printf("ret = %d\n", ret);

	return 0;
}

int my_strcmp(char *str1, char *str2)
{
	while (*str1 != '\0') {
		if (*str1 != *str2) {
			return *str1 > *str2 ? 1:-1;
		}
		str1++;
		str2++;
	}
	return 0;
}

void strcopy(char *str1, char *str2)
{
	while (*str1 != '\0') {
		*str2 = *str1;
		str1++;
		str2++;
	}
	// 若 str2 已初始化，无需加'\0'
	// *str2 = '\0';
}

void my_strch(char *str1, char *str2)
{
	while (*str1 != 0) {
		if (*str1 == 32) {
			str1++;
		}
		*str2 = *str1;
		str1++;
		str2++;
	}
	*str2 = '\0';
}

int my_strstr(char *str1, char *str2)
{
	int i = 0;
	while (*str1 != 0) {
		while (*str1 == *str2 && *str2 != 0) {
			str1++;
			str2++;
			if (*str2 == 0) {
				return i;
			}
			else {
				return -1;
			}
		}
		i++;
		str1++;
	}
	return -1;
}
