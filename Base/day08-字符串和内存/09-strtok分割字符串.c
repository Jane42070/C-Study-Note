#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int main01(int argc, char *argv[])
{
	char str1[] = "www.baidu.com";
	printf("str1: %s\n", str1);
	// 按照既定的分割符，来拆分字符串。“www.baidu.com”
	// 参 1：待拆分的字符串
	// 参 2：分隔符组成的“分割串”
	// 返回字符串拆分后的首地址。“拆分”：将分割字符用'\0'
	char *p = strtok(str1, ".");
	// strtok 函数里一个静态变量记录着拆分剩下的函数地址
	// 如果无法拆分则返回 null
	printf("p = %s\n", p);

	while (p != NULL) {
		p = strtok(NULL, ".");
		printf("p = %s\n", p);
	}

	return 0;
}

// 练习
// 根据多个字符拆分
int main(int argc, char *argv[])
{
	// char str[] = "www.itcast.cn.com.net";
	char str[] = "www.itcast.cn$This is a strtok$test.com.net";

	// 不可行，是一个常量
	// char *str = "www.itcast.cn.com.net";
	// char *p = strtok("www.itcast.cn.com.net", ".");

	// strtok 操作字符串是在原字符串上操作，字符串必须是变量，可读可写的
	char *p = strtok(str, ". $");

	while (p != NULL) {
		p = strtok(NULL, ". $");
		printf("p = %s\n", p);
	}

	return 0;
}
