#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	float v1 = 4.345;
	double v2 = 3.0123456;
	double v3 = 123.456789;

	// float 使用的 %f 格式匹配符，默认保留 6 位小数
	printf("v1 = %f\n", v1);
	// 输出 6 位，第 7 位四舍五入
	printf("v2 = %.6f\n", v2);
	// 输出 10 位数（包含小数点），不足 10 位用 0 填充，保留 4 位小数，对 5 位四舍五入
	printf("v3 = %010.4f\n", v3);

	float a = 3.14f;

	printf("a = %f\n", a);

	// 科学计数法赋值
	
	// 3.2 * 1000 = 3200
	// e3 = 10 * 10 *10
	a = 3.2e3f;
	printf("a = %f\n", a);
	a = 100e-3f;
	// e-3 = 1 / 10 / 10 / 10
	printf("a = %f\n", a);
}
