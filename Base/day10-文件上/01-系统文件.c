#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	// 标准输入 -- stdin -- 0
	// 标准输出 -- stdout -- 1
	// 标准错误 -- stderr -- 2
	// 应用程序启动时，自动被打开，在程序执行结束时，自动被关闭

	// printf -> stdout == 标准输出 -> 屏幕

	// 关闭文件
	// stdout 文件指针
	fclose(stdout);
	fputs("hello world\n", stdout);

	return 0;
}
