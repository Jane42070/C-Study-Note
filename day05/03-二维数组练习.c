#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int scores[5][3] = {
		{60, 80, 98},
		{80, 90, 102},
		{73, 83, 94},
		{101, 93, 76},
		{96, 99, 85},
	};

	int row = sizeof(scores) / sizeof(scores[0]);
	int column = sizeof(scores[0]) / sizeof(scores[0][0]);

	for (int i = 0, sum = 0; i < row; ++i) {
		printf("第%d位同学成绩：\t", i + 1);
		for (int j = 0; j < column; j++) {
			sum += scores[i][j];
			printf("%3d分\t", scores[i][j]);
		}
		printf("总分：%d分\n", sum);
		sum = 0;
	}

	return 0;
}
