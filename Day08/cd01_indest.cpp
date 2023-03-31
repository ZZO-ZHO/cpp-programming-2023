#include <iostream>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) {
		num = n;
		cout << num << "CTest Constructor" << endl;
	}
	~CTest() {			// ½´ÆÛÅ¬·¡½º ¼Ò¸êÀÚ
		cout << "CTest Destructor" << endl;
	}
};

class CTestSub : public CTest {
private:
	int subn;
public:
	CTestSub(int sn, int n) : CTest(sn) {
		subn = n;
		cout << subn << "CTest Constructor" << endl;
	}
	~CTestSub() {
		cout << "STestSub Destructor" << endl;
	}
};

int main()
{
	CTest C(5);
	cout << endl;
	CTestSub B(10,5);
	return 0;
}