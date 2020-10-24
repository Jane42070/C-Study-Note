#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

char *my_strcpy(char *str1, char *str2);

int main(int argc, char *argv[])
{
	/** char dest[100] = {0}; */
	char dest[5] = {0};
	char src[] = "hello strcpy!";

	// 函数调用结束，返回值和dest参数结果一致
	/** char *p = strcpy(dest, src); */
	/** char *p = my_strcpy(dest, src); */

	/** printf("p = %s\n", p); */
	/** printf("dest: %s\n", dest); */

	// 将 src 的内容拷贝给 dest，只拷贝 n 个字节。通常 n 与 dest 对应的空间一致
	// 默认不添加 '\0' 字符
	// if n > src
	// cpy content = src
	// else if n < src
	// cpy n
	strncpy(dest, src, 5);

	/** printf("p = %s\n", p); */
	printf("dest: %s\n", dest);

	return 0;
}

char *my_strcpy(char *str1, char *str2)
{
	char *start = str2, *end = str2 + strlen(str2);
	while (start < end) {
		*str1 = *start;
		str1++;
		start++;
	}
	return str1 - strlen(str2);
}
