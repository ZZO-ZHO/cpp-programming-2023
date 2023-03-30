#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	char name[30];
	int age;
public:
	Person(const char* aname, int aage);
	void getData();
};

class Student : public Person{
private:
	int studentId;
public:
	Student(const char * aname, int aage, int astudentId);
	void showData();

};

Person::Person(const char* aname, int aage)
{
	strcpy(name, aname);
	age = aage;
}

Student::Student(const char* aname, int aage, int astudentId) : Person(aname, aage)
{
	studentId = astudentId;
}

void Person::getData() {
	cout << " 이름 : " << name << " 나이 : " << age << endl;
}

void Student::showData() {
	cout << "학번 : " << studentId;
	getData();
}

int main()
{
	Student p("정재영", 25, 20181422);
	p.showData();
	return 0;
}