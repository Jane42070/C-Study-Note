#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	// 变参函数：参数形参中有“...”，最后一个固参通常是格式描述串（包含格式匹配符）
	// 参数的个数、类型、顺序都是由固参决定的
	/** printf(const char *restrict, ...) */
	// 参 1：固参
	// 写出到屏幕
	/** printf("ret = %d + %d\n", 10, 5) */

	// 写入到 buf
	/** char buf[1024]; */
	/** sprintf(buf, "%d%c%d=%d\n", 5, '+',5, 10); */
	/** sprintf(char *restrict, const char *restrict, ...) */

	/** fprintf(FILE *restrict, const char *restrict, ...) */
	FILE *fp = fopen("01-fprintf.txt", "w");

	if (!fp) {
		perror("fopen error");
	}

	fprintf(fp, "%s%c%s%c%s", "hello", '+', "world", '=', "helloworld");
	
	return 0;
}
