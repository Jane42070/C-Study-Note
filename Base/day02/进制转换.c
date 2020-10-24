#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	int a = 56;

	int b = 0x2e;

	printf("10 进制显示 a = %d\n", b);
	printf("8 进制显示 a = %o\n", b);
	printf("16 进制显示 a = 0x%x\n", b);
}
