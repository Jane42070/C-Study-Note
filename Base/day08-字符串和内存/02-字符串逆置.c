#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

void str_inverse(char *str)
{
	char *start = str;
	char *end = str + strlen(str) - 1;
	while (start < end){
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main(int argc, char *argv[])
{
	char str[] = "this is a string";

	str_inverse(str);

	printf("str = %s\n", str);

	return 0;
}
