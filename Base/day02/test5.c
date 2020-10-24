#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 10

int main(void)
{
	int a;
	const int b = 10;

	a = MAX;

	printf("%d\n", a);

	a = 123;

	printf("a=%d, b=%d\n", a, b);

	return 0;
}
