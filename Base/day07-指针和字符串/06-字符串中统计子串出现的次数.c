#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
// cSpell:disable

// 实现 strlen()
int my_strlen(char *str1);

// 实现 strstr()
char *my_strstr(char *str1, char *str2);

// str 中 substr 出现次数
int str_times(char *str1, char *str2);

int main(int argc, char *argv[])
{
	char str1[] = "hello world";
	char str2[] = "hell9ollol0lollo llo";
	char *str3 = "llo";

	printf("%d\n", str_times(str2, str3));

	return 0;
}

int my_strlen(char *str1)
{
	int len = 0;
	while (*str1 != 0) {
		len++;
		str1++;
	}
	return len;
}

char *my_strstr(char *str1, char *str2)
{
	while (*str1 != 0) {
		while (*str1 == *str2 && *str2 != 0) {
			str2++;
			str1++;
			if (*str2 == 0) {
				return str1;
			}
		}
		str1++;
	}
	return 0;
}

int str_times(char *str1, char *str2)
{
	int count = 0;
	int len = my_strlen(str2);
	char *p = my_strstr(str1, str2);

	while (*p != 0) {
		count++;
		p+=len;
		printf("%s\n", p);
		p = my_strstr(p, str2 - len);
	}
	return count;
}
