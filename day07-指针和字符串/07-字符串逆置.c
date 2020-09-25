#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 字符串逆置
/** void str_inverse(char *str); */

int main(int argc, char *argv[])
{
	char str[] = "hello world";

	printf("&str: %p\n", str);
	// printf("str: %s\n", str);
	str_inverse(str);
	printf("str: %s\n", str);

	return 0;
}

/** void str_inverse(char *str) */
/** { */
/**     int len = strlen(str); */
/**     for (int i = 0; i < len; ++i) { */
/**         char temp = str[i]; */
/**         str[i] = str[len - 1 - i]; */

/**         printf("str[%d] = %c, str[%d] = %c;\n", i, str[i], len - 1 - i, str[len - 1 - i]); */
/**     } */
/** } */
