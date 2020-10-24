#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	char buf[1024] = {0};
	int a, b, c = 0;

	sprintf(buf, "%d+%d=%d", 16, 20, 36);

	printf("%s\n", buf);

	FILE *fp = fopen("revise.txt", "w");

	fprintf(fp, "%d+%d=%d+1", 16, 20, 36);

	fclose(fp);

	FILE *fp1 = fopen("revise.txt", "r");

	fscanf(fp1, "%d+%d=%d", &a, &b, &c);

	rewind(fp1);

	fscanf(fp1, "%s", buf);

	fclose(fp1);

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("buf = %s\n", buf);

	FILE *fp2 = fopen("write_file.txt", "w");

	int ret = 1;

	if (!fp2) {
		perror("fopen error");
		return -1;
	}

	while (ret != 0) {
		ret = fwrite(buf, 1, 1, fp2);
	}

	fclose(fp2);

	return 0;
}
