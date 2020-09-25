#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	// 1.对于二进制文件操作，windows 使用“b”，linux 下二进制和文本没区别。
	// 2.windows 下，回车 \r，换行 \n。\r\n，linux 下回车换行\n
	// 3.对于文件指针：
	// 先写后读：
	// windows 和 linux 效果一致
	// 先读后写：
	// windows 下需要使用 fseek(fp, 0, SEEK_CUR)；来获取文件读写指针，使之生效
	// linux 无需修改
	
	FILE *fp = fopen("09-test.txt","r+");
	char buf[100] = {0};

	char *ptr = fgets(buf, 5, fp);

	printf("buf = %s, ptr = %s\n", buf, ptr);

	fputs("AAAAA", fp);

	fclose(fp);

	return 0;
}
