/*
사용자 정의 자료형인 구조체 : C
*/
//#include <iostream>
#include <stdio.h>

struct human {
	char name[20];
	int age;
};

int main()
{
	//char human;
	struct human h = { "홍길동", 23 };			// 구조체human 타입의 구조체변수h 선언 

	printf("이름 : %s\n", h.name);
	printf("나이 : %d\n", h.age);
	return 0;
}