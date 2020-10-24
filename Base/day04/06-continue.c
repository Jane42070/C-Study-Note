#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i, a, b, c;
	for (i = 0; i < 10; ++i) {
		if (i == 3) {
			// 直接结束本次循环
			continue;
		}
		printf("i = %d\n", i);
	}
	/** printf("i = %d\n", i); */
	printf("=====================\n");
	while (i--) {
		if (i == 3) {
			// 直接结束本次循环
			continue;
		}
		printf("i = %d\n", i);
	}
	return 0;
}
