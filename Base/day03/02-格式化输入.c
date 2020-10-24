#include <stdio.h>
#include <stdlib.h>

int main01(void)
{
	// 大小为 5 字节的数组
	char str[5];

	// 接收用户键盘输入，写入数组 a 中
	// 变量名要取地址传递给 scanf，数组本身表示地址，不用 & 符
	scanf("%s", str);
	char test[200] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	char test1[200] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	char test2[200] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	char test3[200] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	printf("sizeof(str) = %lu\nstr = %s\n", sizeof(str), str);
	/** printf("%s\n", test); */
	return EXIT_SUCCESS;
}

int main(void)
{
	char ch;
	ch = getchar();
	/** printf("main() -> %c\n", ch); */
	putchar(ch);
	putchar('\n');
	/** printf("%c\n", ch+32); */
	return 0;
}
