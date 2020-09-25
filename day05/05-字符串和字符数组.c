#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main01(int argc, char *argv[])
{
	// 指定 \0 结束打印
	char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};

	char str1[] = "hello, world";

	printf("%s\n", str);
	printf("%s\n", str1);

	return 0;
}

// 统计字符串中每个字符出现的次数
int main(int argc, char *argv[])
{
	char str[11] = {0};
	char words[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int count[26] = {0};


	for (int i = 0; i < 10; ++i) {
		scanf("%c", &str[i]);
	}
	/** 等价于 scanf("%s", str); */

	int len = sizeof(str) / sizeof(str[0]) - 1;

	for (int i = 0, sum = 0; i < len; ++i) {
		count[str[i] - 'a']++;
	}

	for (int i = 0; i < 26; ++i) {
		if (count[i] != 0) {
			printf("%c: %d次\t", words[i], count[i]);
		}
	}

	/** printf("str = %s\t len(str) = %d\n", str, len); */
	/** printf("%s\n", words); */

	return 0;
}
