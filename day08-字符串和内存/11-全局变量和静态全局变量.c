#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int test();

// 局部变量
// 概念：定义在函数内部的变量
// 作用域：从定义位置开始，到包裹该变量的第一个右大括号结束。

// 全局变量
// 概念：定义在函数外部的变量
// 作用域：从定义位置开始，默认到本文件尾部。其他文件如果想使用，可以通过声明方式将作用域倒出
// 隐式声明
int a = 10;

// 显示声明
// 不能定义
// 不能完成定义提升
// extern int a;

// static 全局变量
// 在变量定义之前添加 static 关键字
// 作用域：被限制在本文件内部，不允许通过声明导出到其他文件
static int b =10;

// static 局部变量
// 在局部变量定义之前加 static 关键字
// 特性：静态局部变量只定义一次，在全局位置定义
// 通常用来做计数器
// 计算函数调用的次数
// 作用域：和局部变量一样

int main(int argc, char *argv[])
{
	extern int b;
	a = 5;
	printf("a = %d\n", a);
	for (int i; i < 10; ++i) {
		test();
	}
	printf("b = %d\n", b);
	return 0;
}

int test()
{
	static int b = 11;
	printf("b = %d\n", b++);
	return a;
}
