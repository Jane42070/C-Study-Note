#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

char *my_strstr(char *dest, char *str)
{
	char *restart = str;
	while (*dest != 0) {
		while (*dest == *str && *str != 0) {
			dest++;
			str++;
			if (*str == 0) {
				return dest - strlen(restart);
			}
		}
		dest++;
		str = restart;
	}
	return NULL;
}

// 用户写入“:wq”终止接收用户输入，将之前的数据保存成一个文件
int main(int argc, char *argv[])
{
	char str[100] = {0};
	char *cmd = ":wq";

	char *start = fgets(str, 100, stdin);

	char *end = my_strstr(str, cmd);

	FILE *fp = fopen("07-用户输入.txt", "w");

	if (fp == NULL) {
		perror("fopen error");
	}

	while (1) {
		fputc(*start, fp);
		start++;
		if (start == end) {
			break;
		}
	}

	fclose(fp);

	return 0;
}
