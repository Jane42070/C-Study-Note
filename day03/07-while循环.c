#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main01(int argc, char *argv[])
{
	int a;
	scanf("%d", &a);

	while (a>0) {
		printf("a=%d\n", --a);
		/** sleep(1); */
	}
	return 0;
}

int main02(int argc, char *argv[])
{
	int a;
	scanf("%d", &a);

	// 无论如何先执行循环体一次，然后再判断是否继续循环
	do {
		printf("%d\n", --a);
	} while (a>10);

	return 0;
}

// 求水仙花数
int main(int argc, char *argv[])
{
	int num;
	scanf("%d", &num);

	while (num < 1000 && num > 0) {
		if (num > 99) {
			int a = num / 100;
			int b = num % 100 / 10;
			int c = num % 100 % 10;

			/** printf("%d%d%d\n", a, b, c); */

			int sum = a*a*a + b*b*b + c*c*c;

			if (sum == num) {
				printf("%d^3+%d^3+%d^3=%d\n", a, b, c, num);
			}
		}
		else {
			int a = num / 10;
			int b = num % 10;

			/** printf("%d%d\n", a, b); */

			int sum = a*a*a + b*b*b;

			if (sum == num) {
				printf("%d^3+%d^3=%d\n", a, b, num);
			}
		}
		--num;
	}
	return 0;
}
