#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

void fun01();
void fun02();
// 结构体作为返回值
struct info fun03();
// 结构体函数指针
struct info *fun04();

struct info
{
	char name[20];
	int age;
};

// 结构体作为形参
int main01(int argc, char *argv[])
{
	struct info s = {"张三", 20};

	fun01(s);

	printf("name = %s\n", s.name);
	printf("age = %d\n", s.age);

	fun02(&s);

	printf("name = %s\n", s.name);
	printf("age = %d\n", s.age);

	return 0;
}

void fun01(struct info s)
{
	strcpy(s.name, "李四");
	printf("name = %s\n", s.name);
	printf("age = %d\n", s.age);
}

void fun02(struct info *s)
{
	strcpy(s->name, "王五");
	s->age = 40;
	printf("name = %s\n", s->name);
	printf("age = %d\n", s->age);
}

struct info fun03()
{
	struct info s;

	strcpy(s.name, "小明");

	s.age = 22;

	return s;
}

int main(int argc, char *argv[])
{
	struct info s = fun03();

	printf("name = %s\n", s.name);
	printf("age = %d\n", s.age);

	// 在栈区创建的结构体调用结束后被系统销毁掉，返回的地址值内容未知，b 为野指针
	struct info *b = fun04();

	printf("name = %s\n", b->name);
	printf("age = %d\n", b->age);

	return 0;
}

struct info *fun04()
{
	struct info s;

	strcpy(s.name, "小明");

	s.age = 22;

	return &s;
}
