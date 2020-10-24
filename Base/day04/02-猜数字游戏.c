#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

// 猜数字游戏
int main01(int argc, char *argv[])
{
	// 1. 生成一个随机数
	// 1.1. 添加一个随机数种子
	srand(time(NULL));

	int num = rand() % 100, a, i = 1;
	char b;

	while (1) {
		printf("第%d次猜数字：", i++);
		scanf("%d", &a);
		if (a > num) {
			printf("大了！\n");
		}
		else if (a < num){
			printf("小了！\n");
		}
		else {
			printf("对了！是否结束？\n");
			printf("(Y/N):");
			scanf("%c", &b);
			if (b == 'N') {
				break;
			}
		}
	}

	return 0;
}

int main(int argc, char *argv[])
{
	srand(time(NULL));

	int num = rand() % 100, a;

	// while(1)
	for (;;) {
		printf("请输入猜测的数字：");
		scanf("%d", &a);
		if (a > num) {
			printf("大了！\n");
		}
		else if (a < num){
			printf("小了！\n");
		}
		else {
			printf("对了！结束\n");
			break;
		}
	}
	return 0;
}
