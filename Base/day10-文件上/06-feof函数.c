#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

void file_write()
{
	FILE *fp = fopen("06test.txt", "w");

	if (fp == NULL) {
		perror("fopen error");
	}

	int a = 110;

	fputc(a--, fp);
	fputc(-1, fp);
	fputc(a--, fp);
	fputc(a--, fp);
	fputc(a--, fp);
	fputc(-1, fp);
	fputc(a--, fp);
	fputc(a--, fp);
	fputc(a--, fp);
	fputc(a--, fp);
	fputc(a--, fp);
	fputc(a--, fp);

	fclose(fp);
}

void test_feof()
{
	FILE *fp = fopen("06test.txt", "r");

	if (fp == NULL) {
		perror("fopen error");
	}

	while (1) {
		printf("没有到达文件结尾\n");
		// 一次读一个字符，读到的字符丢弃，不保存
		fgetc(fp);
		if (feof(fp)) {
			break;
		}
	}

	fclose(fp);
}

int main(int argc, char *argv[])
{
	/** file_write(); */
	FILE *fp = fopen("06test.txt", "r");

	// 参 1： fopen() 的返回值
	// 返回值：
	// 到达文件结尾：非 0【真】
	// 没到达文件结尾：0【假】
	/** feof(FILE *) -> int */
	// 作用：用来判断到达文件结尾，既可以判断文本文件。也可以判断二进制文件
	test_feof();
	// 特性：要想使用feof() 检测文件结束标记，必须在该函数调用之前，使用读文件函数

	char ch;
	while (1) {
		ch = fgetc(fp);
		if (feof(fp)) {
			break;
		}
		printf("%c\n", ch);
	}

	fclose(fp);
	return 0;
}
