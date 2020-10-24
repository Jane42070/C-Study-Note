#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a = 123;
	int b = 0567;
	int c = 0x023cb;

	printf("a=%d, b=%d, c=%d\n", a, b, c);

	short s1 = 3;

	printf("%d\n", s1);

	long long a1 = 123;

	printf("%lld\n", a1);

	return 0;
}
