#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main01(int argc, char *argv[])
{
	int arr[2][3] = {{2, 5, 8}, {4, 7, 9}};

	int arr1[3][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	int len_arr = sizeof(arr);

	printf("len_arr: %d\n", len_arr);

	for (int i = 0; i < 3; ++i) {
		for (int j= 0; j < 5; ++j) {
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}

	return 0;
}

int main(int argc, char *argv[])
{
	int arr[4][3] = {
		{2, 7, 8},
		{75, 8, 9},
		{26, 37, 99},
		{22, 55, 88},
	};

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 3; j++) {
			printf("%02d\t", arr[i][j]);
		}
		printf("\n");
	}

	printf("数组的大小为：%lu\n", sizeof(arr));
	printf("一行的大小为：%lu\n", sizeof(arr[0]));
	printf("一个元素的大小为：%lu\n", sizeof(arr[0][0]));
	printf("行数：%lu\n", sizeof(arr) / sizeof(arr[0]));
	printf("列数（一行的元素个数）：%lu\n", sizeof(arr[0]) / sizeof(arr[0][0]));

	printf("arr = %p\n", arr);
	printf("arr[0] = %p\n", arr[0]);
	printf("arr[1] = %p\n", arr[1]);
	printf("arr[2] = %p\n", arr[2]);

	return 0;
}
