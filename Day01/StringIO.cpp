#include <iostream >

int main(void)			// 함수의 머리
{					// 함수의 시작
	char name[100];
	char lang[200];

	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇입니까? ";
	std::cin >> lang;

	std::cout << "제 이름은 " << name << "입니다.\n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
	
	return 0;
}					// 함수끝
