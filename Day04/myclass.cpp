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
	Myclass(char ID, int AGE, const char* NAME);

	void getData();
};

Myclass::Myclass(char ID, int AGE, const char* NAME) : id(ID), age(AGE){
	printf("������ȣ��\n");
	id = ID;
	age = AGE;
	strcpy_s(name, 10, NAME);
}

void Myclass::getData()
{
	cout << id << ' ' << name << ' ' << age << endl;
}
int main()
{
	Myclass s('1', 10, "���翵");
	//s.set('1', 10, "���翵");
	s.getData();
	return 0;
}