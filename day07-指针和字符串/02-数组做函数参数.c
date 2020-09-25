#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

void BubbleSort(int arr[], int len);

int main01(int argc, char *argv[])
{
	int arr[] = {5, 1, 3, 8, 7, 10, 4};
	int len = sizeof(arr) / sizeof(arr[0]);

	BubbleSort(arr, len);

	printf("arr = %p\n", arr);

	int *p = arr;

	for (int k = 0; k < len; k++) {
		printf("%d\t", *p);
		p++;
	}

	printf("\n");
	return 0;
}

void BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len - 1; ++i) {
		for (int j = 0; j < len - j - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// 测试
void test(int arr[])
{
	int len = sizeof(*arr);
	printf("len(arr) = %d\n", len);
}
int main(int argc, char *argv[])
{
	int arr[] = {3, 4};
	int len = sizeof(arr);

	printf("len(arr) = %d\n", len);
	test(arr);
	return 0;
}
