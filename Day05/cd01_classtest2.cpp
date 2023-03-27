#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char name[20];
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage) {
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage) {
		//name = "홍길동";
		
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData() {
		cout << "이름 : " << name << " " << "\t | 번호 : " << id << "\t | 나이 : " << age << endl;
	}
};
int main()
{
	/*
	Human h;
	h.setData("정재영", 1 , 25);
	*/

	Human h("홍길동", 1, 30);

	h.getData();
	return 0;
}