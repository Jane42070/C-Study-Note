#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char str[] = {};

	// 借助正则表达式，获取带有空格的字符串，^为除……之外
	/** scanf("%[^\n]", str); */
	scanf("%[^\n]", str);

	printf("%s\n", str);

	return 0;
}
