#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 结构体定义格式
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
// 第四种赋值方式
// 定义结构体的同时初始化结构体变量
// }stu, stu2, stu3;
// }stu = {"蹇棋林", 20, "15310327717", {80.0, 80.0, 99.0}, 'M'};

int main(int argc, char *argv[])
{
	// 第一种赋值方式
	struct students stu = {"蹇棋林", 20, "15310327717", {80.0, 80.0, 99.0}, 'M'};
	// 第二种
	struct students stu2 = {.name = "赵四", .age = 40, .tel = "13777777777", .scores[0] = 70, .scores[1] = 100, .scores[2] = 85, .sex = 'F'};
	// 第三种
	struct students stu3;
	strcpy(stu3.name, "谢广坤");
	stu3.age = 50;
	strcpy(stu3.tel, "13777777778");
	stu3.scores[0] = 50;
	stu3.scores[1] = 73;
	stu3.scores[2] = 92;
	stu3.sex = 'M';

	printf("姓名：%s\n", stu.name);
	printf("年龄：%d\n", stu.age);
	printf("电话：%s\n", stu.tel);
	printf("性别：%s\n", stu.sex == 'M' ? "男" : "女");
	printf("成绩：%.2f\t%.2f\t%.2f\n", stu.scores[0], stu.scores[1], stu.scores[2]);

	printf("\n");

	printf("姓名：%s\n", stu2.name);
	printf("年龄：%d\n", stu2.age);
	printf("电话：%s\n", stu2.tel);
	printf("性别：%s\n", stu2.sex == 'M' ? "男" : "女");
	printf("成绩：%.2f\t%.2f\t%.2f\n", stu2.scores[0], stu2.scores[1], stu2.scores[2]);

	printf("\n");

	printf("姓名：%s\n", stu3.name);
	printf("年龄：%d\n", stu3.age);
	printf("电话：%s\n", stu3.tel);
	printf("性别：%s\n", stu3.sex == 'M' ? "男" : "女");
	printf("成绩：%.2f\t%.2f\t%.2f\n", stu3.scores[0], stu3.scores[1], stu3.scores[2]);

	return 0;
}
