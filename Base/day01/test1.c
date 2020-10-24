#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 返回字符
char test(char c){
	return c;
}

// 主函数
int main(void) {
	int a = 5;
	int b = 4;
	int c = a + b;

	printf("%d\n", c);

	printf("c = %d\n", c);

	printf("%d + %d = %d\n", a, b, a + b);

	printf("test(char c) -> %c\n", test('h'));

	return 0;
}
