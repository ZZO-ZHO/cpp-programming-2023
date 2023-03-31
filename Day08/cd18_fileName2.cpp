#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <cstring>
using namespace std;

class Person {
private:
	char *name;
	int birthday;
public:
	Person(const char* aname, int abirthday);
	void showPerson();
};
Person::Person(const char* aname, int abirthday)
{
	int len = strlen(aname) + 1;
	name = new char[len];

	birthday = abirthday;
}

void Person::showPerson() {
	cout << "이름 : " << name << " 생년월일 : " << birthday << endl;
}

int main()
{
	Person *p1 = new Person("홍길동", 19990909);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p1;
	p3.showPerson();

	return 0;
}

