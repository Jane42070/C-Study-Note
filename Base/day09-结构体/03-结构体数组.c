#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

struct students
{
	// 姓名
	char name[20];
	// 年龄
	unsigned int age;
	// 电话
	char tel[16];
	// 成绩
	float scores[3];
	// 性别
	char sex;
};

int main(int argc, char *argv[])
{
	struct students s[2];

	for (int i = 0; i < 2; ++i) {
		puts("请你输入 姓名 年龄 电话 成绩1 2 3 性别：");
		printf("\t");
		scanf("%s %d %s %f %f %f %c",
				s[i].name,
				&s[i].age,
				s[i].tel,
				&s[i].scores[0],
				&s[i].scores[1],
				&s[i].scores[2],
				&s[i].sex);
	}
	
	for (int i = 0; i < 2; ++i) {
		printf("姓名：%s\n", s[i].name);
		printf("年龄：%d\n", s[i].age);
		printf("电话：%s\n", s[i].tel);
		printf("性别：%s\n", s[i].sex == 'M' ? "男" : "女");
		printf("成绩：%.2f\t%.2f\t%.2f\n", s[i].scores[0], s[i].scores[1], s[i].scores[2]);
	}

	return 0;
}
