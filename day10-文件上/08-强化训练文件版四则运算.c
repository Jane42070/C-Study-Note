#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	char arr[4096] = {0};
	char result[4096] = {0};
	int a;
	int b;
	float sum;
	char operator;
	while (1) {
		fgets(arr, 4096, fp);
		if (feof(fp)) {
			break;
		}
		sscanf(arr, "%d%c%d=\n", &a, &operator, &b);
		switch (operator) {
			case '*':
				sum = a * b;
				break;
			case '/':
				sum = a / b;
				break;
			case '+':
				sum = a + b;
				break;
			case '-':
				sum = a - b;
				break;
			case '%':
				sum = a % b;
				break;
		}
		sprintf(arr, "%d%c%d=%.2f\n", a, operator, b, sum);
		strcat(result, arr);
	}
	fclose(fp);

	FILE *fp2 = fopen(argv[1], "w");

	fputs(result, fp2);

	fclose(fp2);

	return 0;
}
