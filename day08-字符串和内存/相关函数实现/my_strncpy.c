#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

char *my_strncpy(char *dest, char *src, int n);

int main(int argc, char *argv[])
{
	char src[] = "hello world";
	char dest[100] = {0};

	char *p = my_strncpy(dest, src, 5);

	printf("dest = %s\n", dest);
	printf("p = %s\n", p);

	return 0;
}

char *my_strncpy(char *dest, char *src, int n)
{
	int i = n;
	while (i > 0) {
		*dest = *src;
		dest++;
		src++;
		i--;
	}
	return dest - n;
}
