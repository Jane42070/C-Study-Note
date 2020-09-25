#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	// 开辟释放 heap 空间
	// 申请 size 大小的空间
	// 返回实际申请到的内存空间首地址（我们通常拿来当数组用）
	// malloc(size_t __size) -> void *

	// 释放申请的空间
	// free(void *) -> void

	// 在 unix 栈上申请会停止运行
	// int arr[10000000] = {0};
	
	// 在堆上
	int *p = (int *)malloc(sizeof(int) * 10000000);

	if (p == NULL) {
		printf("Malloc failed\n");
		return -1;
	}

	for (int i = 0; i < 10; ++i) {
		p[i] = 10 + i;
	}

	for (int i = 0; i < 10; ++i) {
		printf("p[%d] = %d\n", i, *(p + i));
	}
	p++;

	int *q = p - 1;

	// free 后的空间不会立即失效，通常将 free 后的地址置为空（NULL）
	// free 的地址必须是 malloc 申请地址，否则出错
	// 如果 malloc 之后的地址值一定会变化，使用临时指针 tmp 保存一份
	free(p);
	
	for (int i = 0; i < 10; ++i) {
		printf("p[%d] = %d\n", i, *(p + i));
	}

	return 0;
}
