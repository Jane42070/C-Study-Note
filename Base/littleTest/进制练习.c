#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	// 16 进制
	// 0x10 = 16^1*1 + 16^0*0 = 16*1 = 16
	int a = 0x10;
	// 0x100 = 16^2*1 + 16^1*0 + 16^0*0 = 16^2*1 = 256
	int c = 0x100;
	// 2 进制
	// 0b10 = 10 = 2^1*1 + 2^0*0
	// 0b100 = 100 = 2^2*1 + 2^1*0 + 2^0*0 = 4
	int b = 0b10;
	int d = 0b100;

	// 打印结果
	printf("a = %d, c = %d, b = %d, d = %d", a, c, b, d);

	return 0;
}
