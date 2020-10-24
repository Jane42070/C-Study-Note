#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a = 8;
	short b = 9;
	long c = 10;
	long long d = 11;

	printf("%d\n", b);

	printf("sizeof(int) -> %lu\n", sizeof(int));

	printf("---------------------\n");

	unsigned int aun = 8;
	unsigned short bun = 9;
	unsigned long cun = 10;
	unsigned long long dun = 11;

	printf("%d\n", bun);

	printf("sizeof(int) -> %lu\n", sizeof(int));

	return 0;
}
