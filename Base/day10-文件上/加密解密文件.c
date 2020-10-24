#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[2], "r");
	char buf[4096] = {0};

	if (fp == NULL) {
		perror("open file error");
	}

	printf("加密中...\n");
	while (1) {
		char ch = fgetc(fp);
		if (feof(fp)) {
			fclose(fp);
			break;
		}
		ch+=1;
		strcat(buf, &ch);
	}

	FILE *fp2 = fopen(argv[3], "w");

	if (fp == NULL) {
		perror("create file error");
	}

	fputs(buf, fp2);

	fclose(fp2);
	printf("加密完成！\n");

	return 0;
}
