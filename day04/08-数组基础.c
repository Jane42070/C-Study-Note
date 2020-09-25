#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int a = 10, b = 20, c = 30, d = 40;

	// 数组名为地址，是数组首元素的地址
	printf("&arr = %p\n", &arr);
	printf("&arr[0] = %p\n", &arr[0]);
	printf("&arr[1] = %p\n", &arr[1]);
	printf("&arr[2] = %p\n", &arr[2]);
	printf("&arr[3] = %p\n", &arr[3]);
	printf("&arr[4] = %p\n", &arr[4]);
	// 数组大小
	int arr_len = sizeof(arr);
	printf("sizeof(arr) = %d\n", arr_len);

	// 数组元素大小
	int arr_var_len = sizeof(arr[0]);
	printf("sizeof(arr[0]) = %d\n", arr_var_len);

	// 数组长度 = arr_len / arr_var_len
	printf("len(arr) = %d\n", arr_len / arr_var_len);

	/** printf("&a = %p\n", &a); */
	/** printf("&b = %p\n", &b); */
	/** printf("&c = %p\n", &c); */
	/** printf("&d = %p\n", &d); */
	return 0;
}
