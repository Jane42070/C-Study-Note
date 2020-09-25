#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

void write_file()
{
	FILE *fp = fopen("05test.txt", "w");

	char ch = 'a';

	while (ch < 'z' + 1) {
		fputc(ch, fp);
		ch++;
	}

	fclose(fp);
}

int main(int argc, char *argv[])
{
	write_file();

	FILE *fp = fopen("05test.txt", "r");

	// 参 1：待读取的文件 fp（fopen 的返回值）
	// 返回值：
	// 成功：读到的字符对应的 ASCII 码
	// 失败：-1
	/** fgetc(FILE *) -> int */

	// 文件的结束标记：EOF --> -1
	char ch;
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(fp);
	
	return 0;
}
