#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main01(int argc, char *argv[])
{
	// int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	int a = 10;
	int b = 20;
	int c = 30;

	int *p1 = &a;
	int *p2 = &b;
	int *p3 = &c;

	// 整型指针数组arr，里面存的都是整型地址
	// 指针数组本质是一个二级指针
	int *arr[] = {p1, p2, p3};

	printf("&a = %p\n", p1);
	printf("a = %d\n", *p1);
	printf("&p1 = %p\n", &p1);

	printf("arr[0] = %d\n", **(arr + 0));
	printf("arr[1] = %d\n", **(arr + 1));
	printf("arr[2] = %d\n", **(arr + 2));
	
	return 0;
}

int main(int argc, char *argv[])
{
	// 二维数组，也是二级指针
	int a[] = { 10 };
	int b[] = { 20 };
	int c[] = { 30 };

	int *arr[] = { a, b, c };

	printf("arr[2][0] = %d\n", **(arr + 1));

	return 0;
}
