#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

char *my_strcat(char *dest, char *src);

int main(int argc, char *argv[])
{
	char dest[20] = "hello";
	char *src = "world";

	char *p = my_strcat(dest, src);

	printf("dest = %s\n", dest);
	printf("p = %s\n", p);

	return 0;
}

char *my_strcat(char *dest, char *src)
{
	int len = strlen(dest) + strlen(src);
	dest = dest + strlen(dest);
	while (*src != 0) {
		*dest = *src;
		dest++;
		src++;
	}
	return dest - len;
}
