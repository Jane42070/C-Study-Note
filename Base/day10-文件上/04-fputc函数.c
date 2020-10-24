#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main01(int argc, char *argv[])
{
	// 参 1：待写入的字符
	// 参 2：打开文件的 fp （fopen 的返回值）
	/** fputc(int, FILE *) -> int */
	// 返回值：
	// 成功；写入文件中的字符对应的 ASCII 码
	// 失败：-1

	char *fname = "test.txt";
	// char *fname == const char filename[]
	FILE *fp = fopen(fname, "w");

	if (fp == NULL) {
		perror("Fopen error");
		return -1;
	}

	int ret = fputc('A', fp);

	fclose(fp);

	printf("FINISH -> %d\n", ret);

	return 0;
}

// 小练习--写 26 个英文字符放到文件中
int main(int argc, char *argv[])
{
	FILE *fp = fopen("alphabet.txt", "w");

	if (fp == NULL) {
		perror("打开文件错误");
		return -1;
	}

	/** for (int i = 'A'; i < 'A' + 26; ++i) { */
	/**     fputc(i, fp); */
	/**     fputc('\n', fp); */
	/** } */

	char ch = 'A';

	while (ch <= 'Z') {
		int ret = fputc(ch, fp);
		if (ret == -1) {
			perror("写入错误");
		}
		ch++;
	}

	fclose(fp);

	return 0;
}
