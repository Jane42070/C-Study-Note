#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char str[4096] = {0};
	if (fp == NULL) {
		perror("fopen error");
	}

	while (1) {
		fgets(str, 4096, fp);
		if (feof(fp)) {
			break;
		}
		printf("%s", str);
	}

	fclose(fp);

	return 0;
}
