#include <iostream>
using namespace std;

class Myclass {
	int value;
public:
	Myclass(int avalue) :value(avalue) {	}
	Myclass operator+(const Myclass & other) {
		return Myclass(value + other.value);
	}
	void print() {
		cout << value << endl;
	}
};

int main()
{
	Myclass a(10);
	a.print();

	Myclass b(10);
	b.print();

	Myclass c(10);
	c.print();

	Myclass d = a + b + c;
	d.print();
	return 0;
}