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

void test01()
{
	char Monkey[] = "6 ears monkey";
	cout << KingGlory::Monkey << endl;

	// 1. using declaration
	// using KingGlory::Monkey;

	// when using declaration and nearer principle happens in the same time, error occurs
	std::cout << Monkey << std::endl;
}

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

int main(int argc, char *argv[])
{
	test01();
	test02();
	return 0;
}
