/*
�ݷ� �ʱ�ȭ�� �ʿ��Ѱ��
1. ���������� 2. ��ü������� 3. ����������� (4.�������)
*/#include <iostream>
using namespace std;

class ConstSome {
public:
	const int val;			// ����������
	ConstSome(int n) : val(n) {}
	void printval() {
		std::cout << val << std::endl;
	}
};
class RefSome {
public:
	int& ref;			  // �����������
	RefSome(int n) :ref(n){}
	void printval() {
		std::cout << ref << std::endl;
	}
};
class Position {
public:
	int x, y;
	Position(int ax, int ay) {
		x = ax;
		y = ay;
	}
};
class ObjSome {
public:
	Position pos;			//��ü�������
	ObjSome(int ax, int ay) : pos(ax, ay){}
	void printfval() {
		std::cout << pos.x << " " << pos.y << std::endl;
	}
};
int main()
{
	ConstSome c(10);
	c.printval();

	int n = 20;
	RefSome r(n);
	r.printval();

	return 0;
}