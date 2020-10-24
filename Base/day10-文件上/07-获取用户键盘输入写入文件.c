#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	char str[10] = {0};
	// 获取一个字符串
	// 以 \n 作为结束标记
	// 空间足够大 读 \n，空间不足舍弃 \n
	// 必须有 \0
	/** char *fgets(char *restrict, int, FILE *) */
	// 返回值：
	// 成功：读到的字符串
	// 失败：NULL
	fgets(str, 10, stdin);

	FILE *fp = fopen("07-test.txt", "w");

	fputs(str, fp);

	fclose(fp);

	fp = fopen("07-test.txt", "r");

	// 写出字符串
	// 返回值：
	// 成功：0
	// 失败：-1
	fputs(str, stdout);

	fclose(fp);
	return 0;
}
