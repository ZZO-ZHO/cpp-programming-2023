#include <iostream>
using namespace std;

class Super {
public:
	//void func1() { cout << "Super::func1()" << endl; }
	//void func2() { cout << "Super::func2()" << endl; }
	virtual void func1() { cout << "Super::func1()" << endl; }
	virtual void func2() { cout << "Super::func2()" << endl; }
	void func3() { cout << "Super::func3()" << endl; }
};

class Sub : public Super {
public:
	void func1() { cout << "Sub::func1()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void func4() { cout << "Sub::func4()" << endl; }
};

int main()
{
	Super super;
	Sub sub;
	super.func3();
	super.func2();
	super.func1();
	sub.func4();
	sub.func3();
	sub.func2();
	sub.func1();

	cout << endl;

	Super* ps = new Sub;
	ps->func3();
	ps->func1();
	ps->func2();

	delete ps;

	return 0;
}