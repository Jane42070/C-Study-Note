#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	FILE *rfp = fopen(argv[1], "r");
	char *fname = argv[2];
	if (argv[2] == 0) {
		fname = strrchr(argv[1], '/');
		fname++;
	}
	FILE *wfp = fopen(fname, "w");
	char buf[4096] = {0};
	if (!rfp || !wfp) {
		perror("fopen error");
		return -1;
	}

	while (1) {
		memset(buf, 0, sizeof(buf));
		int rret = fread(buf, 1, sizeof(char) * 4096, rfp);
		int wret = fwrite(buf, 1, sizeof(char) * 4096, wfp);
		if (rret == 0 || wret == 0) {
			break;
		}
	}

	printf("备份完成\n");

	return 0;
}
