// vs 下使其不报错
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	// 标准 i input 输入 || o output 输出
#include <stdlib.h>	// 操作内存的库函数 malloc free
#include <string.h>	// 字符串 string 处理
#include <unistd.h> // linux 的库函数
#include <math.h> // 数学计算的一些库函数
#include <time.h>

// 1. typedef 的使用
// 可以起别名
struct Person {
	char name[20];
	int age;
}

int main(int argc, char *argv[])
{
	char buf[1024];

	strcpy(buf, "hello world");

	printf("%s\n", buf);

	// windows 下，将程序阻塞
	system("pause");

	return 0;
}
