#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

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

int main(int argc, char *argv[])
{
	char *str1, *str2;
	str1 = "helo lo world";
	str2 = "llo";

	printf("%s\n", my_strstr(str1, str2));
	printf("%s\n", strstr(str1, str2));

	return 0;
}
