#define SRT_
#include <iostream>
using namespace std;

class Myclass {
	//멤버변수
private:
	char id;		// 사실은 정수다 ~
	int age;
	char name[10];
	//멤버함수(=메소드) : 기능
public:
	void set(char ID, int AGE, const char *NAME)
	{
		id = ID;
		age = AGE;
		strcpy_s(name, 10, NAME);
		//name[10] = *NAME;
	}

	void get()
	{
		cout << id << name << age << endl;
	}
};

int main()
{
	Myclass s;
	s.set('1', 10, "정재영");
	s.get();
	return 0;
}