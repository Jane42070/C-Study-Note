#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	char buf[4096] = {0};
	FILE *fp = fopen("四则运算.txt", "w");
	int a, b;
	char o;
	float c;

	if (fp == NULL) {
		perror("fopen error");
	}

	while (1) {
		fgets(buf, 4096, stdin);
		if (!strcmp(buf, ":wq\n")) {
			fclose(fp);
			break;
		}
		sscanf(buf, "%d%c%d=\n", &a, &o, &b);
		switch (o) {
			case '/':
				c = a / b;
				break;
			case '+':
				c = a + b;
				break;
			case '-':
				c = a - b;
				break;
			case '*':
				c = a * b;
				break;
			case '%':
				c = a % b;
				break;
		}
		char result[4096];
		sprintf(result, "%d%c%d=%.2f\n", a, o, b, c);
		fputs(result, fp);
	}

	fclose(fp);

	fp = fopen("四则运算.txt", "r");

	while (1) {
		fgets(buf, 4096, fp);
		if (feof(fp)) {
			break;
		}
		printf("%s", buf);
	}

	fclose(fp);

	return 0;
}
