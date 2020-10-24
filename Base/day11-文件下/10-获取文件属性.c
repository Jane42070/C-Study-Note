#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

void grant_file_size()
{
	FILE *fp = fopen("./09-linux与windows差异.c", "r");

	fseek(fp, 0, SEEK_END);

	int size = ftell(fp);

	fclose(fp);

	printf("size: %d\n", size);
}

int main(int argc, char *argv[])
{
	// 打开文件，对于系统而言，系统资源消耗比较大
	// 参 1：访问文件路径
	// 参 2：文件属性结构体
	// 返回值：
	// 成功：0
	// 失败：-1
	/** stat(const char *, struct stat *) -> int */
	struct stat buf;

	int ret = stat("./09-linux与windows差异.c", &buf); // 传出参数：在函数调用结束时充当函数返回值

	printf("ret %d\n", ret);

	printf("文件大小：%lld\n", buf.st_size);

	return 0;
}
