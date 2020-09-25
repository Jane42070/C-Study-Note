#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 1. 简化变量名
// 2. 简化结构体
// 3. 简化共用体
typedef unsigned long long ULL;

struct studentInfoList
{
	char name[20];
	char sex;
};

typedef struct studentInfoList SIFL;

int main(int argc, char *argv[])
{
	unsigned long long a = 300;
	ULL b = 200;

	SIFL s1;
	strcpy(s1.name, "张三");
	s1.sex = 'M';

	printf("%s, %c\n", s1.name, s1.sex);

	printf("a = %llu\n", a);
	printf("b = %llu\n", b);
	return 0;
}
