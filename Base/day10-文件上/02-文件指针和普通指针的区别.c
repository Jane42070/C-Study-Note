#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	// 文件指针初始化
	// 借助文件操作函数来改变 fp 为空或者野指针的状况
	// 相当于 fp = malloc(xxxx)
	// 不能 fp++;
	// 否则无法释放内存空间
	// FILE *fp = NULL;
	// FILE *fp = fopen(const char *restrict __filename, const char *restrict __mode)
	// 操作文件，使用文件读写函数来完成：fputc、fgetc、fputs、fgets、fread、fwrite
	return 0;
}
