#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int str_len(char *str);

int main(int argc, char *argv[])
{
	char arr[100];
	fgets(arr, 100, stdin);
	printf("%d\n", str_len(arr));
	return 0;
}

int str_len(char *str)
{
	int len = 0;
	while (*str != 0) {
		*str != ' ' && *str != '\n' ? len++ : 0;
		str++;
	}
	return len;
}
