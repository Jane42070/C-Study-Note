#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

// 宽度
#define WIDE 50
// 高度
#define HIGH 75

// 蛇身
struct BODY {
	int X;
	int Y;
};

// 定义蛇对象
struct snake {

};

int main(int argc, char *argv[])
{
	for (int i = 0; i < 50; ++i) {
		for (int j = 0; j < 75; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
