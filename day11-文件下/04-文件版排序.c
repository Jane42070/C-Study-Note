#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

void BubbleSort(int *arr, int len)
{
	for (int i = 0; i < len - 1; ++i) {
		for (int k = 0; k < len - 1 - i; k++) {
			if (arr[k] < arr[k + 1]) {
				int temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
}

void wf()
{
	FILE *fp = fopen("file_sort.txt", "w");

	if (!fp) {
		perror("fopen error");
	}
	srand(time(NULL));
	int a = rand() % 100, i = 0;

	while (i < 100) {
		a = rand() % 100;
		fprintf(fp, "%d\n", a);
		i++;
	}

	fclose(fp);
}

void wnf(int *arr, int len)
{
	FILE *fp = fopen("file_sorted.txt", "w");
	if (!fp) {
		perror("fopen error");
	}
	for (int i = 0; i < len; ++i) {
		fprintf(fp, "%d\n", arr[i]);
	}

	fclose(fp);
}

void sf()
{
	FILE *fp = fopen("file_sort.txt", "r");

	if (!fp) {
		perror("fopen error");
	}

	int arr[100] = {0}, i = 0;

	while (1) {
		fscanf(fp, "%d\n", &arr[i]);
		i++;
		if (feof(fp)) {
			break;
		}
	}

	BubbleSort(arr, i);

	wnf(arr, i);

	fclose(fp);
}

int main(int argc, char *argv[])
{
	wf();
	sf();
	return 0;
}
