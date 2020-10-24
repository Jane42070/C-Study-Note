#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	unsigned int a = 10u;
	unsigned short b = 20u;
	unsigned long c = 30Lu;
	unsigned long long d = 40LLu;

	printf("%u\n", a);
	printf("%hu\n", b);
	printf("%lu\n", c);
	printf("%llu\n", d);

	return 0;
}
