#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	char name[30];
	int birthday;
public:
	Person(const char* aname, int abirthday);
	void showPerson();
};
Person::Person(const char* aname, int abirthday)
{
	strcpy(name, aname);
	birthday = abirthday;
}

void Person::showPerson() {
	cout << "이름 : " << name << " 생년월일 : " << birthday << endl;
}

int main()
{
	Person p1("홍길동", 19990909);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p1;
	p3.showPerson();

	return 0;
}

