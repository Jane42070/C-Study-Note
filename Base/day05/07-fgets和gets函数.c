#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main01(int argc, char *argv[])
{
	char str[100] = {0};

	// 获取一个字符串（可以带有空格），返回字符串的首地址
	// get(char *s);
	// 参数：用来储存字符串的空间；返回值：返回实际获取到的字符串首地址。
	// scanf 和 gets 无法知道字符串的大小，直接存入内存地址，容易导致字符数组越界（缓冲区溢出）的情况
	printf("获取的字符串为：%s\t地址为：%p\n", str, gets(str));

	return 0;
}

int main(int argc, char *argv[])
{
	char str[10] = {0};

	// 1: 用来储存字符串的空间地址
	// 2: 描述空间的大小
	// 3: 读取字符串的位置。标准输入：stdin
	// fgets(char *restrict, int, FILE *) 预留 \0 的存储空间
	// 当预留存储空间足够的时候，会读取\n，空间不足会舍弃\n
	printf("获取的字符串为：%s", fgets(str, sizeof(str), stdin));

	return 0;
}
