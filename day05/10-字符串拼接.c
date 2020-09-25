#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include <unistd.h>

// 模仿 strlen() 函数
int str_length(char str[]){
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

int main(int argc, char *argv[])
{
	char str1[] = "hello";
	char str2[] = "world";

	char str3[100] = {0};

	int i = 0;

	// '\0' 的 ascii 是 0
	while (1) {
		for (int j = 0; j < str_length(str1); ++j) {
			str3[i] = str1[j];
			i++;
		}
		for (int j = 0; j < str_length(str2); ++j) {
			str3[i] = str2[j];
			i++;
		}
		break;
	}

	fputs(str3, stdout);
	
	return 0;
}
