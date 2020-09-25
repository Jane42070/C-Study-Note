#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a = 10;
	short b = 20;
	long c = 30;
	long long d = 40;

	printf("int 大小为：%lu\n", sizeof(int));
	printf("short 大小为：%lu\n", sizeof(short));
	printf("long 大小为：%lu\n", sizeof(long));
	printf("long long 大小为：%lu\n", sizeof(long long));

	int size = sizeof(b);

	printf("sizeof(b) -> %d\n", size);

	printf("sizeof(d) -> %lu\n", sizeof(d));

	return 0;
}
