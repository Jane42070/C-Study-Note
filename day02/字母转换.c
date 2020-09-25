#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char ch = 'A';

	int a = 65;

	char CH = ch + 32;

	printf("ch = %c, CH = %c\n", ch, CH);
	printf("a = %c\n", a);
	printf("'\\n'的值为%d\n", '\n');
	printf("\a");
}
