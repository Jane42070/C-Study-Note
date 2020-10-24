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
	// 随机位置 读
	// 文件读写指针。在一个文件内只有一个
	// 参 1：文件
	// 参 2：偏移量（矢量：+ 向后，- 向前）
	// 参 3：
	// SEEK_SET：文件开头位置
	// SEEK_CUR：当前位置
	// SEEK_END：文件结尾位置
	/** fseek(FILE *, long, int) */
	// 返回值：int
	// 成功：0
	// 失败：-1

	// 获取文件读写指针位置
	// 返回值：从文件当前读写位置到起始位置的偏移量
	/** ftell(FILE *) -> long */
	// 借助 ftell + fseek(SEEK_END)，来获取文件大小。
	

	// 回卷文件读写指针
	// 回到文件指针开头位置
	// 将读写指针移动到起始位置
	/** rewind(FILE *) -> void */

	/** FILE *fp = fopen(argv[1], "r"); */
	/** fseek(fp, 0, SEEK_END); */
	/** printf("文件大小：%ld字节\n", ftell(fp)); */

	/** fclose(fp); */

	FILE *fp = fopen("08-test.txt", "w+");

	if (!fp) {
		perror("fopen error");
		return -1;
	}

	stu_t stu[4] = {
		18, "afei", 10,
		30, "andy", 20,
		20, "lily", 30,
		16, "james", 40,
	};

	stu_t s1;

	fwrite(&stu[0], 1, sizeof(stu), fp);

	fseek(fp, sizeof(stu_t) * 2, SEEK_SET);

	fread(&s1, 1, sizeof(stu_t), fp);

	printf("age: %d\nname: %s\nnum: %d\n", s1.age, s1.name, s1.num);

	printf("文件当前读写指针位置的偏移量：%ld字节\n", ftell(fp));

	fclose(fp);

	return 0;
}
