#define SRT_
#include <iostream>
using namespace std;

class Myclass {
	//�������
private:
	char id;		// ����� ������ ~
	int age;
	char name[10];
	//����Լ�(=�޼ҵ�) : ���
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
	s.set('1', 10, "���翵");
	s.get();
	return 0;
}