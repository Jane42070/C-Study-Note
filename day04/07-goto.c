#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	for (int i = 0; i < 10; ++i) {
		LABEL:
		printf("========%d=======\n", i);
	}
	// 只在函数内部生效
	goto LABEL;
	return 0;
}
