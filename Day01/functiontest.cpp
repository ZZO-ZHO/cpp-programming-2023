#include <iostream>
/*
int main() {
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;

	return 0;
}*/

// ��� �Լ��̸� (�Է�)

// ������� �����Լ�
/*
void func(void) {

	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}

int main()
{
	func();
	return 0;
}
*/

//�Է��� �ִ� �Լ�
/*
void func(int a,int b) {

	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;
}

int main()
{
	func(10,20);

	int n1 = 10;
	int n2 = 20;

	func(n1, n2);
}
*/

int func(int a, int b);		// �Լ�����

int main()
{
	func(10,20);

	int n1 = 10;
	int n2 = 20;

	int res = func(n1, n2);
	std::cout << "res : " << res << std::endl;
	std::cout << "res : " << func(n1, n2) << std::endl;
}

int func(int a,int b) {		// �Լ�����

	int res;
	res = a + b;
	return res;
}