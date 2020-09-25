#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int arr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	int arr2[10] = {1};
	int arr3[] = {};
	// 不能这么写
	/** int arr4[]; */
	int arr4[] = {0};
	/** arr4[1] = 3; */
	/** arr4[2] = 4; */
	/** arr4[3] = 5; */

	int len_arr = sizeof(arr) / sizeof(arr[0]);
	int len_arr2 = sizeof(arr2) / sizeof(arr2[0]);
	int len_arr3 = sizeof(arr3) / sizeof(arr3[0]);

	printf("%p\n", &arr);
	printf("len(arr): %d\n", len_arr);

	for (int i = 0; i < len_arr; ++i) {
		// 剩余未初始化的元素，默认 0 值
		printf("arr[%d]: %d\n", i, arr[i]);
	}

	for (int i = 0; i < len_arr2; ++i) {
		printf("arr2[%d]: %d\n", i, arr2[i]);
	}

	for (int i = 0; i < len_arr3; ++i) {
		printf("arr3[%d]: %d\n", i, arr3[i]);
	}
	printf("%d\n", len_arr3);
	return 0;
}
