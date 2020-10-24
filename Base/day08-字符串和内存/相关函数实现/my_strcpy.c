#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

char *my_strcpy(char *str1, char *str2);

int main(int argc, char *argv[])
{
	char str1[100] = {0};
	char str2[] = "hello, world";

	my_strcpy(str1, str2);

	printf("%s\n", str1);

	return 0;
}

char *my_strcpy(char *str1, char *str2)
{
	while (*str2 != 0) {
		*str1 = *str2;
		str2++;
		str1++;
	}
	return str1 - strlen(str2);
}
