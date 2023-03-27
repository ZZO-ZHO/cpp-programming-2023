#include <iostream>

int main()			// 함수의 머리
{					// 함수의 시작
	int val1 = 0;
	std::cout << "첫번째 숫자 입력 : " ;
	std::cin >> val1;

	int val2;
	std::cout << "두번째 숫자 입력 : ";
	std::cin >> val2;

	int res = val1 + val2;
	std::cout << "덧셈결과 : " << res << std::endl;

	return 0;
}					// 함수끝

