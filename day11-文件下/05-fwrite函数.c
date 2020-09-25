#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

typedef struct student
{
	int age;
	char name[10];
	int num;
} stu_t;

int main(int argc, char *argv[])
{
	// 用来处理二进制文件
	// 参 1：待写出数据的地址
	// 参 2：待写出单个的数据的大小
	// 参 3：写出的个数/次数
	// 参 2 * 参 3 = 写出数据的总大小
	// 参 4：文件
	// 返回值：
	// 成功：永远是 参 3 的值
	// 失败：0
	/** fwrite(const void *restrict __ptr, size_t __size, size_t __nitems, FILE *restrict __stream) */
	// 通常将参 2 传 1，参 3 传实际写出的字节数

	stu_t stu[4] = {
		18, "afei", 10,
		20, "andy", 20,
		30, "lily", 30,
		16, "james", 40,
	};

	FILE *fp = fopen("fwrite.txt", "w");

	if (!fp) {
		perror("fopen error");
		return -1;
	}

	int ret = fwrite(&stu[0], 1, sizeof(stu_t) * 4, fp);

	if (ret == 0) {
		perror("fwrite error");
		return -1;
	}

	printf("ret = %d\n", ret);

	fclose(fp);

	return 0;
}
