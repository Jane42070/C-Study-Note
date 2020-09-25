#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int j_str(char *str)
{
	char *start = str, *end = str + strlen(str) - 2;
	while (start < end) {
		if (*start != *end) {
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	char str[100];
	fgets(str, 100, stdin);
	printf("%s", str);
	int ret = j_str(str);
	printf("%s", ret ? "是回文数" : "不是回文数");
	return 0;
}
