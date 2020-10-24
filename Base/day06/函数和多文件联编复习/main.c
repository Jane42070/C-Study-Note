#include "head.h"

int main(int argc, char *argv[])
{
	int arr[] = { 9, 10, 8, 4, 5, 7, 6, 2, 3, 1, 0, 12, 11, 14, 15, 13};
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("arr[0] -> %p\n", &arr[0]);
	printf("len(arr) -> %d\n", len);

	sort_arr(arr, len);
	print_arr(arr, len);
	return 0;
}
