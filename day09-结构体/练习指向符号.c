#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

struct students
{
	double d;
	int a;
	int b;
	char *c;
}stu;

int main(int argc, char *argv[])
{
	struct students *p = (struct students *)malloc(sizeof(stu));
	p->c = malloc(sizeof(char) * 21);
	p->a = 5;
	p->b = 10;
	strcpy(p->c, "hello world");
	printf("p->a = %d\n", p->a);
	printf("p->c = %p\n", &p->c);
	printf("p->c = %s\n", p->c);
	printf("sizeof(students) = %lu\n",sizeof(stu));

	free(p->c);
	free(p);

	return 0;
}
