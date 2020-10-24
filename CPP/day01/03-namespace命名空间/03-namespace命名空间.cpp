#include "game1.h"
#include "game2.h"

using namespace std;

// namespace's function:
// 1. handle function naming conflicts
void test01()
{
	// game1 中的命名空间 namespace KingHonor
	KingHonor::goAtk();
	// game2 中的命名空间 namespace KingGlory
	KingGlory::goAtk();
}

// 2. place variables, functions, structs and classes ...
namespace A
{
	int a = 10;
	void func();
	struct Person{};
	class Animal{};
};

// 3. namespace is obliged to declare at global action scope
void test02()
{
	// Alert: cannot do this
	// namespace B {}
}

void test03()
{
	cout << "variable a below A namespace = " << A::a << endl;
}

// 4. namespace can be nested
namespace B
{
	int b = 20;
	namespace C
	{
		int c = 30;
	};
};

void test04()
{
	cout << "variable b under B namespace = " << B::b << endl;
	cout << "variable c under C namespace = " << B::C::c << endl;
}

// 5. namespace is opening, freely to add new members anytime
namespace B
{
	int B = 40;
}

void test05()
{
	cout << "variable b under B namespace = " << B::b << endl;
	cout << "variable c under C namespace = " << B::C::c << endl;
	cout << "variable B under B namespace = " << B::B << endl;
}

// 6. anonymous namespace ( very little )
namespace
{
	int global = 0;
}

void test06()
{
	std::cout << "global variable global = " << ::global << std::endl;
}

// 7. namespace can be named to other names
namespace veryLongName
{
	char name[] = "long name";
};

void test07()
{
	namespace veryShortName = veryLongName;
	std::cout << veryLongName::name << std::endl;
	std::cout << veryShortName::name << std::endl;
}

int main(int argc, char *argv[])
{
	test01();
	test03();
	test04();
	test05();
	test06();
	test07();
	return 0;
}
