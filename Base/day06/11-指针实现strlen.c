#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 指针实现 strlen 函数
int str_len(const char *);

int main(int argc, char *argv[])
{
	char ch[] = "hello world";

	printf("len(ch) = %d\n", str_len(ch));
	return 0;
}

int str_len(const char *ch)
{
	const char *p = ch;
	while (*p != '\0') {
		p++;
	}
	return p - ch;
}
