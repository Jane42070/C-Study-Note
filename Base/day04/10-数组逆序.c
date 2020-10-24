#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main01(int argc, char *argv[])
{
	int arr[] = {1, 6, 8, 0, 4, 3, 9, 2}, i, temp;

	printf("arr[0] = %d\n", arr[0]);

	int len_arr = sizeof(arr) / sizeof(arr[0]);

	// 冒泡排序
	for (i = 0; i < len_arr; ++i) {
		for (int r = 0; r < i; ++r) {
			if (arr[i] < arr[r]) {
				temp = arr[r];
				arr[r] = arr[i];
				arr[i] = temp;
			}
		}
	}

	// 遍历输出
	for (i = 0; i < len_arr; ++i) {
		printf("arr[%d]=%d ", i, arr[i]);
	}

	return 0;
}

int main(int argc, char *argv[])
{
	int arr[] = {1, 6, 8, 0, 4, 3, 9, 2}, i, len = sizeof(arr) / sizeof(arr[0]), j = len - 1, temp;

	/** printf("arr[0] = %d\n", arr[0]); */

	for (int k = 0; k < len; k++) {
		printf("arr[%d] = %d\n", k, arr[k]);
	}

	while (i < j) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		++i;
		--j;
	}

	printf("arr = %d\n", len);
	for (int k = 0; k < len; k++) {
		printf("arr[%d] = %d\n", k, arr[k]);
	}

	return 0;
}
