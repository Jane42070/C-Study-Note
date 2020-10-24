#include <iostream>

using namespace std;

// 1. global variables detection enhancement
int a;
// int a = 10;

// 2. function detection improvement
// 2.1. return value detection
// 2.2. function type detection
// 2.3. formal parameter types detection
// 2.4. function calls parameters numbers detection
float getRectS(float w, float h) { return (w * h) / 2; }

void test01() { printf("%.2f\n", getRectS(10, 10)); }

// 3. type transform detection enhanced
void test03()
{
	char *p = (char *)malloc(64);
}

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

// 6. ternary operator enhanced
// 6.1. extra operators can be added in ternary operator
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

int main(int argc, char *argv[])
{
	test01();
	test04();
	test05();
	test06();
	return 0;
}
