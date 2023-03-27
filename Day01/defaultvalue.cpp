#include <iostream>
/*
int Adder(int num1 = 1, int num2 = 2);			// 함수 선언

int main(void) {							
	std::cout << Adder() << std::endl;			// 함수 호출
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3,5) << std::endl;
	return 0;
}

int Adder(int n1, int n2) {						// 함수 정의
	return n1 + n2;
}
*/

int BoxVolum(int length, int width = 1, int height = 1);

int main(void)
{
	std::cout << "[3, 3, 3] : " << BoxVolum(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolum(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolum(7) << std::endl;
	//std::cout << "[D, D, D] : " << BoxVolum() << std::endl;
	return 0;
}

int BoxVolum(int length, int width, int height) {
	return length * width * height;
}