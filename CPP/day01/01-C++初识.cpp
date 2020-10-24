// 标准输入输出流 i - input 输入 || o - output 输出 stream 流 相当于 stdio.h
#include <iostream>
// C++ 旧风格头文件.h
// 新风格不需要加
// #include <cmath>
// #include <math.h>

// #include <ctime>
// #include <time.h>

// 使用 标准 命名空间
using namespace std;

// 程序的入口函数
int main(int argc, char *argv[])
{
	// cout 标准输出流对象
	// C 语言下 1 << 1 = 1 * (2^1)
	// << 左移 在 C++ 下有了新的寓意，用于在 cout 后拼接输出的内容
	// endl --- end line   刷新缓冲区并且换行；
	// C 下 window 需要用\r\n  linux 下\n
	cout << "hello world" << endl;
	cout << "hello world" << 100;
	return 0;
}
