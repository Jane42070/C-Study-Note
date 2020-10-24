#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main(int argc, char *argv[])
{
	// buffer string str source src
	char buf[100];

	printf("%d%c%d=%d\n", 10 ,'+', 34, 44);

	// 将输出存入 buf
	// 对应 printf，将原来写到屏幕的“格式化字符串”，写入到参数 1 中
	sprintf(buf,"%d%c%d=%d\n", 10 ,'+', 34, 44);

	puts(buf);
	fputs(buf, stdout);

	int a, b, c;

	/** scanf("%d+%d=%d[^\n]", &a, &b, &c); */

	/** sprintf(buf, "%d+%d=%d", a, b, c); */

	/** fputs(buf, stdout); */

	char arr[] = "22+33=55";
	printf("arr = %s\n", arr);

	// 格式串写入到 arr 数组里
	sscanf(arr, "%d+%d=%d", &a, &b, &c);

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);

	return 0;
}
