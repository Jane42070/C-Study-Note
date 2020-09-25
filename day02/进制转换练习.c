#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int sixteen = 0x4F;
	int a = 0x0F;
	int b = 0xf0;
	int c = 56;
	printf("%d\n", sixteen);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%o\n", c);
}
