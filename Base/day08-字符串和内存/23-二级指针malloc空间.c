#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	// int **p == *p[3] == [int *, int *, int *]
	// 24 字节
	int **p = malloc(sizeof(int *) * 3);

	for (int i = 0; i < 3; ++i) {
		p[i] = (int *)malloc(sizeof(int) * 5);
	}

	// 使用空间
	for (int i = 0; i < 3; ++i) {
		for (int l = 0; l < 5; l++) {
			p[i][l] = i + l;
		}
	}

	// p[i][j] == *(p + i)[j] == *(*(p + i) + j)
	for (int i = 0; i < 3; ++i) {
		for (int l = 0; l < 5; l++) {
			printf("%d\t", *(*(p + i) + l));
		}
		printf("\n");
	}

	// 释放空间时，应该先释放内层空间
	for (int i = 0; i < 3; ++i) {
		free(*(p + i));
	}

	// 再释放外层空间
	free(p);
	p = NULL;

	return 0;
}
