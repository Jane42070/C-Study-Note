#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

struct stuinfo
{
	// 姓名
	char *name;
	// 年龄
	int age;
};

// 单个成员
int main01(int argc, char *argv[])
{
	struct stuinfo stu1;

	// 开辟堆内存空间
	stu1.name = malloc(sizeof(char) * 20);

	strcpy(stu1.name, "张三");

	stu1.age = 18;

	printf("%s, %d\n", stu1.name, stu1.age);

	if (stu1.name != NULL) {
		free(stu1.name);
		stu1.name = NULL;
	}

	return stu1.name == NULL? 1 : 0;
}

// 多个成员
int main02(int argc, char *argv[])
{
	struct stuinfo s[3];

	for (int i = 0; i < 3; ++i) {
		printf("输入名字 年龄：\n");
		s[i].name = malloc(20);
		scanf("%s %d", s[i].name, &s[i].age);
	}

	for (int i = 0; i < 3; ++i) {
		printf("名字 年龄：\n");
		printf("%s %d\n", s[i].name, s[i].age);
		if (s[i].name != NULL) {
			free(s[i].name);
			s[i].name = NULL;
		}
	}

	return 0;
}

struct students
{
	char *name;
	int age;
}stu;

int main(int argc, char *argv[])
{
	struct students *s = &stu;
	s->age = 80;

	s->name = (char *)malloc(sizeof(char) * 20);
	strcpy(s->name, "蹇棋林");

	printf("姓名：%s 年龄：%d\n", s->name, s->age);

	if (s->name != NULL) {
		free(s->name);
		s->name = NULL;
	}

	return 0;
}
