#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

struct students
{
	char *name;
	int age;
}stu;
// 堆空间开辟结构体
int main(int argc, char *argv[])
{
	struct students *p = (struct students *)malloc(sizeof(stu) * 5);
	p->name = (char *)malloc(sizeof(char) * 21);
	strcpy(p->name, "牛能");

	p->age = 20;

	printf("%s, %d\n", p->name, p->age);

	printf("p->name = %p\n", p->name);

	if (p->name != NULL) {
		free(p->name);
		p->name = NULL;
	}
	printf("p->name = %p\n", p->name);

	printf("p = %p\n", p);
	if (p != NULL) {
		free(p);
		p = NULL;
	}
	printf("p = %p\n", p);

	return 0;
}
