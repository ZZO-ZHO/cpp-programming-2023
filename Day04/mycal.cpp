#include <iostream>
using namespace std;

class mycalu {
private:
	int num1;
	int num2;
	int result = 0;
public:
	mycalu(int i, int j);		// 생성자로 초기화 한다. (콜론 초기화)

	void add();
	void sub();
	void mul();
	void div();
};

mycalu::mycalu(int i, int j)
	:num1(i), num2(j)
{
	printf("생성자호출\n\n");
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