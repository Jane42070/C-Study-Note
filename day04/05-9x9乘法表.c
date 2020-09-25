#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i, j, k;
	printf("9x9乘法表\n");
	for (i = 9; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("%dx%d=%-2d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
