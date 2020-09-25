#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

char *strivs(char *str);

int main(int argc, char *argv[])
{
	char str[] = "hello world";

	strivs(str);

	printf("%s\n", str);

	return 0;
}

char *strivs(char *str)
{
	char *start = str;
	char *end = str + strlen(str) - 1;
	while (start < end) {
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	return str;
}
