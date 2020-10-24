#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main01(int argc, char *argv[])
{
	char ch[14];
	// fgets 空间足读 \n ，不足舍弃 \n （安全）
	printf("fgets(ch) -> %s", fgets(ch, sizeof(ch) / sizeof(ch[0]), stdin));
	/** printf("%s\n", ch); */
	// 自动加\n
	puts(ch);
	fputs(ch, stdout);
	return 0;
}

int main(int argc, char *argv[])
{
	int a = 10;
	int b = 20;

	int *p = &a;
	int *q = &b;

	a = *q;
	
	printf("&a = %p\n", &a);
	printf("&b = %p\n", &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("&a = %p\n", &a);
	printf("sizeof(*p) = %lu\n", sizeof(*p));

	return 0;
}
