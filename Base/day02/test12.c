#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char a = 'a';

	a = 'm';

	printf("%c\n", a);

	/** system("sleep 1"); */

	a = 97;

	printf("%c + %d\n", a, a);

	return 0;
}
