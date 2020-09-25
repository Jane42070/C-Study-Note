#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	char b[] = {0};
	fgets(b , 10, stdin);
	printf("b = %s\n", b);
	return 0;
}
