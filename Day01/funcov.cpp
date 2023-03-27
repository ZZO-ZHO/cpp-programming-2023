//# include <iostream>
#include <stdio.h>

void func()
{
	//std::cout << "func() " << std::endl;
	printf("func()\n");
}

void func(int a)
{
	//std::cout << "func(a) " << std::endl;
	printf("func(a)\n");
}

void func(int a, int b)
{
	//std::cout << "func(a) " << std::endl;
	printf("func(a, b)\n");
}

void func(char a)
{
	//std::cout << "func(a) " << std::endl;
	printf("func(a)\n");
}

int main()
{
	int n = 1, n1 = 2;
	char a = 'a';
	func();
	func(n);
	func(n, n1);
	func(a);

	return 0;
}