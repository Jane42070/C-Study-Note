<!-- vim-markdown-toc GFM -->

* [C++ 概述](#c-概述)
* [C++ 初识](#c-初识)
	* [namespace 命名空间](#namespace-命名空间)
	* [using 声明 & using 编译指令](#using-声明--using-编译指令)
	* [C++ 对 C 语言增强以及扩展](#c-对-c-语言增强以及扩展)

<!-- vim-markdown-toc -->
# C++ 概述
- C++ 两大编程思想
	- 面向对象 (OPP)
	- 泛型编程
- 移值性和标准
	- ANSI 在 1998 年制定出 C++ 第一套标准
	- C++2003 在 C++98 下修正了一些错误，没有新增功能
	- C++11 新增了功能
# C++ 初识
- 引入头文件
	```cpp
	#include <isostream>
	```
- 使用标准命名空间
	```cpp
	using namespace std;
	```
- 标准输出流对象
	```cpp
	// endl --- end line
	cout << "hello" << " " << "world" << 100 << endl;
	```
- 面向对象三大特性
	- 封装、继承、多态
- 双冒号作用域运算符
	- `::` 代表作用域，如果前面什么都不加，代表全局作用域
## namespace 命名空间

1. 命名空间用途：解决命名冲突
2. 命名空间下可以存放：变量，函数，结构体，类...
3. 命名空间必须要声明在全局作用域
4. 命名空间可以嵌套命名空间
5. 命名空间是开放的，可以随时添加新成员
6. 命名空间可以匿名
7. 命名空间可以起别名
## using 声明 & using 编译指令

```cpp
#include <iostream>

using namespace std;

namespace KingGlory
{
	char Monkey[] = "HuKong";
}

namespace KingHonor
{
	char Monkey[] = "FakeHuKong";
}
```
- using 声明
	```cpp
	void test01()
	{
		char Monkey[] = "6 ears monkey";
		cout << KingGlory::Monkey << endl;

		// 1. using declaration
		// using KingGlory::Monkey;

		// when using declaration and nearer principle happens in the same time, error occurs
		std::cout << Monkey << std::endl;
	}
	```
- using 编译指令
	```cpp
	void test02()
	{
		char Monkey[] = "8 ears monkey";
		// 1. using compile command
		using namespace KingGlory;
		using namespace KingHonor;

		// if using compile command inccur with nearer principle, nearer principle has prior to another
		// when there are multiple using compile commands, add action scope to distinguish them are indispensable
		std::cout << Monkey << std::endl;
	}
	```
## C++ 对 C 语言增强以及扩展
- 全局变量检测增强
	```cpp
	// 1. global variables detection enhancement
	int a;
	int a = 10;
	[ccls 2] [E] redefinition of 'a'
	```
	- C 下可以，C++ 重定义
- 函数检测增强
	```cpp
	// 2. function detection improvement
	// 2.1. return value detection
	// 2.2. function type detection
	// 2.3. formal parameter types detection
	// 2.4. function formal parameters transform quantity detection
	float getRectS(float w, float h) { return (w * h) / 2; }

	void test01() { printf("%.2f\n", getRectS(10, 10, 10)); }
	```
- 类型转换检测增强
	```cpp
	// 3. type transform detection enhanced
	void test03()
	{
		// each side of type must be same kind
		char *p = (char *)malloc(64);
	}
	```
- struct 增强
	```cpp
	// 4. struct enhanced
	// 4.1. functions can be put into structs
	// 4.2. keyword "struct" can be ignored when created a struct variable
	// In Clang, functions are not obliged to put in structs
	struct Person
	{
		int age;
		void increase()
		{
			age++;
		};
	};

	void test04()
	{
		// In Clang, keyword "struct" must be added when struct variables are created
		Person p;
		p.age = 20;
		std::cout << p.age << std::endl;
		p.increase();
		std::cout << p.age << std::endl;
	}
	```
- bool 类型拓展
	```cpp
	// 5. bool type extensed
	// 5.1. Clang don't include bool type
	bool flag = true;

	void test05()
	{
		flag = 100;
		// transform all non-zero values to 1
		std::cout << flag << std::endl;
		std::cout << "size of flag = " << sizeof(flag) << std::endl;
	}
	```
- 三目运算符 (ternary operator)
	```cpp
	// 6. ternary operator enhanced
	// 6.1. extra operators can be added in ternary operator
	// 6.2 in Clang, it returns value, C++ returns variable instead
	void test06()
	{
		// ?:
		int a = 10;
		int b = 20;

		a > b ? a : b = 100;
		printf("a = %d\n", a);

		std::cout << (*(a > b ? &a : &b) = 100) << std::endl;
		std::cout << "a = " << a << std::endl;
	}
	```
