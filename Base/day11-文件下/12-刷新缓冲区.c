#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen("12-refreshbuffer.txt", "w+");

	if (!fp) {
		perror("fopen error");
		return -1;
	}

	char m;

	while (1) {
		scanf("%c", &m);
		if (m == ':') {
			break;
		}
		fputc(m, fp);
		// 指定指定缓冲区刷新
		// 指定手动刷新缓冲区到物理磁盘上
		// 返回值
		// 成功：0
		// 失败：-1
		fflush(fp);
	}

	// 文件关闭时，缓冲区会自动刷新
	fclose(fp);

	return 0;
}
