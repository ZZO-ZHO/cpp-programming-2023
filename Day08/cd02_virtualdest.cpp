#include <iostream>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) : num(n){
		cout << num << " CTest constructor" << endl;
	}
	virtual ~CTest() {
		cout << "CTest destrucor" << endl;
	}
	void func() {
		cout << "CTest func() " << endl;
	}
	virtual void vfunc() {
		cout << "CTest vfunc() " << endl;
	}
};

class CTestSub : public CTest{
private:
	int snum;
public:
	CTestSub(int sn, int n) : CTest(sn), snum(n) {
		cout << snum << " CTest constructor" << endl;
	}
	~CTestSub() {
		cout << "CTestSub destrucor" << endl;
	}
	void vfunc() {
		cout << "CTestSub func() " << endl;
	}
};

int main(){
	//CTest c1(1);
	//cout << endl;
	//CTestSub c2(3, 5);
	//cout << endl;
	CTest* ps = new CTestSub(3, 33);

	delete ps;

	return 0;
}