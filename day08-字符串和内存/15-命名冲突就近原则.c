#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int m = 4456;

int main(int argc, char *argv[])
{
	int i = 10;

	for (int i = 0; i < 10; ++i) {
		printf("i = %d\n", i);
	}

	printf("i = %d\n", i);

	return 0;
}
