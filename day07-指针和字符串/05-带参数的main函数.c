#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 带参数的 main 函数
// 参1：表示给 main 函数传递的参数的总个数
// 参2：是一个数组，数组的每一个元素都是 char *
// int main(int argc, char *argv[]) == int main(int argc, char **argv)
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; ++i) {
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return 0;
}
