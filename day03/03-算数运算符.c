#include <stdio.h>
#define PI 3.14

int main01()
{
	int a = 10;
	int b = 20;

	printf("a=%d\n", a++);
	printf("b=%d\n", ++b);

	int c = a + b;

	printf("a+b=%d\n", c);

	char str[10] = "hello";

	printf("%c\n", str[0]++);

	// 三目运算符
	printf("%s\n", a > b ? "a>b" : a > 10 ? "a>10" : "a<10");
	return 0;
}

int main(){
	// 逗号运算符
	int a = 10, b = 20, c = 30;

	int x = (a = 1, b = 2, c = 5);

	printf("%d\n", x);

#ifdef PI
	printf("%08.2f\n", PI);
#endif

	return 0;
}
