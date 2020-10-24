#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	// 使用这类函数进行转换，要求，原串必须是可以转换的字符串
	// X: "abc123" -> 0, "12abc123" -> 12, "123xyz" -> 123
	// 字符串转整数
	// atoi(const char *) -> int
	// 字符串转浮点数
	// atof(const char *) -> float
	// 字符串转长整型
	// atol(const char *) -> long
	// 字符串转长长整型
	// atoll(const char *) -> long long
	printf("%lu\n", sizeof(long long));

	char str1[] = "abd10";

	int num1 = atoi(str1);
	printf("num1= %d\n", num1);


	char str2[] = ".123f";
	float num2 = atof(str2);

	printf("num2= %3.3f\n", num2);

	char str3[] = "231291";
	long num3 = atoll(str3);

	printf("num3= %ld\n", num3);

	return 0;
}
