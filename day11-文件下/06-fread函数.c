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

void write_struct()
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
		return;
	}

	int ret = fwrite(&stu[0], 1, sizeof(stu_t) * 4, fp);

	if (ret == 0) {
		perror("fwrite error");
		return;
	}

	printf("ret = %d\n", ret);

	fclose(fp);

	return;
}

void read_struct()
{
	FILE *fp = fopen("fwrite.txt", "r");

	if (!fp) {
		perror("fopen error");
		return;
	}

	stu_t buf[4 * 1024];

	int ret = fread(buf, sizeof(stu_t), 1, fp);

	printf("ret = %d\n", ret);

	printf("age = %d, name = %s, num = %d", buf->age, buf->name, buf->num);
}

int main(int argc, char *argv[])
{
	// 参数 1：读取到的数据存储的位置
	// 参数 2：一次读取的字节数
	// 参数 3：读取的次数
	// 参 2 * 参 3 = 读出数据的总大小
	// 参数 4：读的文件
	// 返回值：
	// 成功：参数 3
	// 失败：0
	// 0：读失败 -- feof(fp) -- 到达文件结尾
	/** fread(void *restrict __ptr, size_t __size, size_t __nitems, FILE *restrict __stream) */
	// 通常参 2 传 1
	// 参 3 传欲读出的字节数
	write_struct();
	read_struct();

	return 0;
}
