#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	// 参 1：待打开文件的文件名（访问路径）
	// 文件访问路径，绝对路径，相对路径
	// 参 2：文件打开权限
	// “r”：只读方式打开文件，文件不存在，报错
	// “w”：只写方式打开文件，文件不存在，创建。存在，清空并打开
	// “w+”：读、写方式打开文件，文件不存在，创建一个空文件。文件如果存在，清空并打开
	// “a”：以追加的方式打开文件
	// 返回值：
	// 成功：返回打开文件的文件指针
	// 失败：NULL
	/** fopen(const char *restrict __filename, const char *restrict __mode) -> FILE * */

	// 参 1：打开文件的 fp（fopen 的返回值）
	// 返回值：
	// 成功：0
	// 失败：-1
	/** fclose(FILE *) -> int */

	FILE *fp = NULL;
	fp = fopen("./文件分类.md", "r");
	if (fp == NULL) {
		// perror 会显示错误的原因
		perror("打开文件错误");
		return -1;
	}

	fclose(fp);

	printf("FINISH\n");

	return 0;
}
