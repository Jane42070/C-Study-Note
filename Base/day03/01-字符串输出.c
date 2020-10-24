#include <stdio.h>

int main01(void)
{
	char str[] = "hello world";
	char str1[13] = {'h','e','l','l','o',',','w','o','r','l','d','!'};
	printf("%s\n", str);
	printf("%s\n", str1);
	printf("str1 --> %lu\n", sizeof(str1));
	return 0;
}

int main(void)
{
	char str[] = "hello world";
	char str1[13] = {'h','e','l','l','o',',','w','o','r','l','d','!'};
	printf("%.8s", str1);
	putchar(75 + 32);
	/** putchar("HELLO"); */
}
