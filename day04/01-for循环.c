#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main03(int argc, char *argv[])
{
	int i = 0;

	int sum = 0;

	for (; i <= 100; ++i) {
		sum += i;
		/** printf("%d\n", i); */
	}

	printf("sum = %d\n", sum);

	return 0;
}

int main02(int argc, char *argv[])
{
	int i = 0;

	int sum = 0;

	for (; i <= 100;) {
		++i;
		sum += i;
		/** printf("%d\n", i); */
	}

	printf("sum = %d\n", sum);

	return 0;
}

int main01(int argc, char *argv[])
{
	int i = 0;

	int sum = 0;

	// 死循环
	for (;;) {
		++i;
		/** if (i==5000) { */
		/**     break; */
		/** } */
		sum += i;
		/** printf("%d\n", i); */
	}

	printf("sum = %d\n", sum);

	return 0;
}

int main(int argc, char *argv[])
{
	int i = 0;
	int a = 0;

	// for 循环的表达式个数不限定
	for (i = 1, a = 3; a < 20; i++, a+=1) {
		printf("i = %d\n", i);
		printf("a = %d\n", a);
	}
	return 0;
}
