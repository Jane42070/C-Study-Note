#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	char buf[1024] = {0};

	FILE *fp = fopen("./02-fscanf函数.c", "r");
	if (!fp) {
		perror("fopen error");
		return -1;
	}

	while (1) {
		fgets(buf, 1024, fp);
		if (feof(fp)) {
			break;
		}
		printf("%s", buf);
	}

	fp = fopen("./02-fscanf函数.c", "r");

	while (1) {
		memset(buf, 0, 1024);
		fscanf(fp, "%s", buf);
		printf("%s", buf);
		if (feof(fp)) {
			break;
		}
	}

	fclose(fp);

	return 0;
}
