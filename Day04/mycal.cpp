#include <iostream>
using namespace std;

class mycalu {
private:
	int num1;
	int num2;
	int result = 0;
public:
	mycalu(int i, int j);		// �����ڷ� �ʱ�ȭ �Ѵ�. (�ݷ� �ʱ�ȭ)

	void add();
	void sub();
	void mul();
	void div();
};

mycalu::mycalu(int i, int j)
	:num1(i), num2(j)
{
	printf("������ȣ��\n\n");
}

void mycalu::add() {
	result = num1 + num2;
	cout << num1 << " + " << num2 << " = " << result << endl;
}

void mycalu::sub() {
	result = num1 - num2;
	cout << num1 << " - " << num2 << " = " << result << endl;
}

void mycalu::mul() {
	result = num1 * num2;
	cout << num1 << " * " << num2 << " = " << result << endl;
}

void mycalu::div() {
	result = num1 / num2;
	cout << num1 << " / " << num2 << " = " << result << endl;
}

int main()
{
	mycalu cal(10, 5);
	cal.add();
	cal.sub();
	cal.mul();
	cal.div();
	return 0;
}