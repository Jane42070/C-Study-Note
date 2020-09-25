#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
// cSpell:disable

// 字符串中查找子串出现次数
int my_strstr(char *str, char *sub_str);
char *strsstr(char *str, char *sub_str);

int main(int argc, char *argv[])
{
	char str[] = "hello9 llo loollo world";
	
	printf("str: %s\n", str);

	printf("%s 的出现次数: %d\n", "llo", my_strstr(str, "llo"));

	return 0;
}

int my_strstr(char *str, char *sub_str)
{
	int num= 0;
	char *p = strsstr(str, sub_str);
	while (*p != 0) {
		p = strsstr(p, sub_str);
		num++;
	}
	return num;
}

char *strsstr(char *str, char *sub_str)
{
	while (*str != 0 && *sub_str != 0) {
		if (*str == *sub_str) {
			str++;
			sub_str++;
		}
		else {
			str++;
		}
	}
	return str;
}
