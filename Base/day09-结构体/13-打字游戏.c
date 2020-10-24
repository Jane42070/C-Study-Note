#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

void tips()
{
	printf("=============================\n");
	printf("==========打字游戏===========\n");
	printf("========按任意键继续=========\n");
	printf("=======按 ESC 退出游戏=======\n");
	printf("=============================\n");
	char ch = getchar();
	if (ch == 27) {
		exit(0);
	}
}

void rand_ch(char *arr)
{
	srand((int)time(NULL));
	for (int i = 0; i < 50; ++i) {
		arr[i] = rand() % 26 + 'a';
	}
}

int main(int argc, char *argv[])
{

	char arr[51] = {0};
	memset(arr, 0, 51);
	rand_ch(arr);

	tips();
	printf("%s\n", arr);

	unsigned int stime;
	unsigned int etime;
	int val;
	float right;

	stime = time(NULL);
	for (int i = 0; i < 50; i++) {
		char ch = getchar();
		if (ch == arr[i]) {
			printf("%c", ch);
			val++;
		}
	}

	etime = time(NULL);

	right = ((float)val / 50) * 100;

	unsigned int time = etime - stime;

	printf("\n花费时间：%d秒\n", time);
	printf("正确率： %.2f%%\n", right);

	return 0;
}
