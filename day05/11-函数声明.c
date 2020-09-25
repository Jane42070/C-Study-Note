#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// 在函数调用之前，编译器必须见过函数定义，否则，需要函数声明。
int bubble_sort(int arr[], int len);

int main(int argc, char *argv[])
{
	int arr[] = {7, 6, 1, 3, 8, 9, 2, 5, 4, 0};

	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]));

	return 0;
}

int bubble_sort(int arr[], int len)
{
	for (int i = 0; i < len; ++i) {
		for (int j = len - 1; j > i; --j) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < len; ++i) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
	exit(10);
}
