#include <iostream>

using namespace std;

int atk = 1000;

void test01()
{
	int atk = 2000;
	cout << "atk = " << atk << endl;
	// :: 代表作用域，如果前面什么都不加，代表全局作用域
	cout << "全局 atk = " << ::atk << endl;
	std::cout << "atk = " << ::atk << std::endl;
}

int main(int argc, char *argv[])
{
	test01();
	return 0;
}
