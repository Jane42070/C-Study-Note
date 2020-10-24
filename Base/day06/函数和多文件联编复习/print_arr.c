#include "head.h"

void print_arr(int arr[], int len)
{
	for (int i = 0; i < len; ++i) {
		printf("%-4d", arr[i]);
	}
	printf("\n");
}
