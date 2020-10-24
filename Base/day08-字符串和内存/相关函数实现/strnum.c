#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>

int strnum(char *str);

int main(int argc, char *argv[])
{
	char str[] = "hello, world!";

	int num = strnum(str);

	printf("num: %d\n", num);

	return 0;
}

int strnum(char *str)
{
	int num = 0;
	while (*str != 0) {
		if (*str == 32) {
			str++;
		}
		num++;
		str++;
	}
	return num;
}
