#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

struct a
{
	int a;
	float b;
	char c;
};

// 嵌套结构体
// 找最大的数据类型 char *e
struct b
{
	// 4
	double d;
	// 8
	char *e;
	// 2
	short f;
	// 12
	struct a abc;
};
// 结构体嵌套内存运算
// 8(d) + 8(e) + 8(f + a) + 8(b + c)

int main(int argc, char *argv[])
{
	struct b  strb;
	strb.abc.a = 10;
	strb.abc.b = 4.22;

	printf("%d\n", strb.abc.a);
	printf("%.2f\n", strb.abc.b);

	printf("sizeof(struct b) = %lu\n", sizeof(strb));
	printf("sizeof(float) = %lu\n", sizeof(float));

	return 0;
}
