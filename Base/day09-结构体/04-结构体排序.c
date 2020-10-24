#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

struct students
{
	char name[20];
	float scores[3];
};

int main(int argc, char *argv[])
{
	struct students s[3];
	for (int i = 0; i < 3; ++i) {
		puts("请你输入 姓名 成绩1 2 3：");
		printf("\t");
		scanf("%s %f %f %f",
				s[i].name,
				&s[i].scores[0],
				&s[i].scores[1],
				&s[i].scores[2]);
	}

	// 冒泡排序
	// 交换结构体成员
	// 还有一种方式是交换结构体成员的变量（太麻烦）
	for (int i = 0; i < 3 - 1; ++i) {
		for (int l = 0; l < 3 - i - 1; l++) {
			int sum1 = s[l].scores[0] + s[l].scores[1] + s[l].scores[2];
			int sum2 = s[l + 1].scores[0] + s[l + 1].scores[1] + s[l + 1].scores[2];
			if (sum1 < sum2) {
				struct students temp = s[l];
				s[l] = s[l + 1];
				s[l + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 3; ++i) {
		puts("姓名 成绩1 2 3：\n");
		printf("%s %.2f %.2f %.2f\n",
				s[i].name,
				s[i].scores[0],
				s[i].scores[1],
				s[i].scores[2]);
	}

	return 0;
}
