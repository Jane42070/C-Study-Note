#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[])
{
	srand(time(NULL));
	printf("我想输出一个数：%d\n", rand() % 100);
	int a, b, c;
	// 错误
	/** scanf("我想输入一个数：%d\n", &a); */
	scanf("%d %d %d", &a, &b, &c);
	/** scanf("%d,%d,%d", &a, &b, &c); 输入：10逗号10逗号10*/
	printf("%d\n", a);
	return 0;
}
