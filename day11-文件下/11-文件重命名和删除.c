#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
	// 删除
	remove("./09-linux与windows差异");

	// 重命名
	rename("./04-文件版排序", "./04-文件版排序666");
	return 0;
}
