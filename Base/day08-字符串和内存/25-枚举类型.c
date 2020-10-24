#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	/*! \enum week
	*
	*  week days
	*/
	// 枚举常量是整型常量，不能是浮点数，可以是负值。
	// 默认初值从 0 开始，后续常量较前一个常量 +1
	// 可以给任意一个常量赋任意初值，后续常量较前一个常量 +1
	enum week { Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} day, a, b, c;
	a = Monday;
	b = Tuesday;
	c = Wednesday;

	fputs("请输入 1 ~ 7：", stdout);
	scanf("%d", &day);

	switch (day) {
		case Monday:
			puts("Monday");
			break;
		case Tuesday:
			puts("Tuesday");
			break;
		case Wednesday:
			puts("Wednesday");
			break;
		case Thursday:
			puts("Thursday");
			break;
		case Friday:
			puts("Friday");
			break;
		case Saturday:
			puts("Saturday");
			break;
		case Sunday:
			puts("Sunday");
			break;
	}

	return 0;
}
