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
		//name = "ȫ�浿";
		
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData() {
		cout << "�̸� : " << name << " " << "\t | ��ȣ : " << id << "\t | ���� : " << age << endl;
	}
};
int main()
{
	/*
	Human h;
	h.setData("���翵", 1 , 25);
	*/

	Human h("ȫ�浿", 1, 30);

	h.getData();
	return 0;
}