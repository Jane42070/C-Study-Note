#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i, j, k;

	for (i = 0; i < 24; ++i) {
		for (j = 0; j < 60; ++j) {
			for (k = 0; k < 60; ++k) {
				printf("%02d:%02d:%02d\n", i, j, k);
				sleep(1);
				system("clear");
			}
		}
	}
	return 0;
}
