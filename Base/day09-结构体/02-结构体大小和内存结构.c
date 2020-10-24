#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// 结构体需要根据数据类型进行内存对齐
// 所有数据类型的大小在内存中存储的地址一定是它的类型的倍数
// 如 sizeof(int) = 4
// char name[20] = sizeof(char) * 20 = 20 / int
// char sex = 4
/** struct students */
/** { */
/**     char name[20]; // 20 */
/**     unsigned int age; // 4 */
/**     char tel[15]; // 15 */
/**     float scores[3]; // 12 */
/**     char sex; // 1 */
/** } stu1, stu2, stu3; */

struct students
{
	// 8
	char *p;
	// 8
	double f;
	// 8
	long g;
	// 2 * 4
	float h[2];
	// 4
	int c;
	// 2
	short d;
	// 2
	char arr[2];
}stu1, stu2, stu3;
int main(int argc, char *argv[])
{
	// 结构体大小
	printf("sizeof(stu1) = %lu\n", sizeof(stu1));
	printf("sizeof(*p) = %lu\n", sizeof(stu1.p));
	printf("sizeof(arr) = %lu\n", sizeof(stu1.arr));
	printf("sizeof(c) = %lu\n", sizeof(stu1.c));
	printf("sizeof(d) = %lu\n", sizeof(stu1.d));
	printf("sizeof(f) = %lu\n", sizeof(stu1.f));
	printf("sizeof(g) = %lu\n", sizeof(stu1.g));
	printf("sizeof(h) = %lu\n", sizeof(stu1.h));

	printf("&p = %p\n", &stu1.p);
	printf("&arr = %p\n", stu1.arr);
	printf("&c = %p\n", &stu1.c);
	printf("&d = %p\n", &stu1.d);
	printf("&f = %p\n", &stu1.f);
	printf("&g = %p\n", &stu1.g);
	printf("&h = %p\n", stu1.h);
	return 0;
}
