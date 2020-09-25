#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int arr[2][3][4] = {
		{
			{1, 2, 3}, {4, 5, 6}, {7, 8, 9}
		},
		{
			{1, 2, 3}, {4, 5, 6}, {7, 8, 9}
		},
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				printf("%d ", arr[i][j][k]);
			}
			printf("\t");
		}
		printf("\n");
	}

	return 0;
}
