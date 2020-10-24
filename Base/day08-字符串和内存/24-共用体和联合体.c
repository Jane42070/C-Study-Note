#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 定义共用体
// 可以同时创建变量
union test {
	char ch;
	short sh;
	int var;
} a, b, c;

int main(int argc, char *argv[])
{
	// 创建变量
	union test a, b, c;
	// 联合体大小是内部成员变量中最大的成员变量的大小
	printf("sizeof(union test) = %lu\n", sizeof(union test));
	printf("sizeof(a) = %lu\n", sizeof(a));
	// 这段代码不但验证了共用体的长度，还说明共用体成员之间会相互影响
	// 修改一个成员的值会影响其他成员。
	a.var = 0x40;
	printf("a.var = %d, a.ch = %c, a.sh = %d\n", a.var, a.ch, a.sh);
	a.ch = 'A';
	printf("a.var = %d, a.ch = %c, a.sh = %d\n", a.var, a.ch, a.sh);
	a.sh = 0x01;
	printf("a.var = %d, a.ch = %c, a.sh = %d\n", a.var, a.ch, a.sh);
	a.var = 0x221319;
	printf("a.var = %d, a.ch = %c, a.sh = %d\n", a.var, a.ch, a.sh);

	printf("sizeof(short) = %lu\n", sizeof(short));
	return 0;
}
