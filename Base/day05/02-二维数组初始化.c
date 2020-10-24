#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int arr[3][5] = {{1, 2, 3}, {4, 5,}, {8,}};
	// 系统自动分配行列
	// 二维数组定义必须指定列值
	int arr1[3][5] = {1, 2, 3, 4, 5, 8,};

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 5; ++j) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 5; ++j) {
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}

	return 0;
}
