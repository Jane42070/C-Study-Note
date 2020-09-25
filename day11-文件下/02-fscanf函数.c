#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	// 键盘接收数据
	/** scanf(const char *restrict, ...) */
	// 从字符串接收数据
	/** sscanf(const char *restrict, const char *restrict, ...) */
	// 从文件接收数据
	/** fscanf(FILE *restrict, const char *restrict, ...) */
	char a[10], b, c[10], d, e[20] = {0};

	FILE *fp = fopen("./01-fprintf.txt", "r");

	if (!fp) {
		perror("fopen error");
	}

	/** fscanf(fp, "%s%c%s%c%s", a, &b, c, &d, e); */
	/** fscanf(fp, "%s", e); */
	/** fputs(e, stdout); */

	// 边界问题
	// 边界溢出，存储读取的数据空间，在使用之前清空
	/** fscanf(fp, "%s", e); */
	/** fputs(e, stdout); */

	/** printf("%s%c%s%c%s\n", a, b, c, d, e); */

	while (1) {
		// fscanf 函数，每次在调用时都会判断下一次调用是否匹配参数 2，如果不匹配，提前结束文件读操作 feof(fp)
		fscanf(fp, "%c", &b);
		printf("%c\n", b);
		if (feof(fp)) {
			break;
		}
	}

	fclose(fp);

	return 0;
}
