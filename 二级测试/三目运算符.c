#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int x = 0;
	if (-1) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	
	for (int j = 0; j < 3; ++j) {
		if (j % 2) continue;
		x++;
		printf("j = %d\n", j);
		printf("x = %d\n", x);
	}

	printf("%d\n", 0 % 2);

	return 0;
}
