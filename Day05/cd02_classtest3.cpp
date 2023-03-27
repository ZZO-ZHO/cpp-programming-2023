#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	//char name[20];
	char *name;
	//Human hary[10];
	int id;
	int age;
public:
	Human(const char *aname, int aid, int aage) {
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	~Human() {				//¼Ò¸êÀÚ
		delete[] name;

	}
	/*
	void setData(const char aname[20], int aid, int aage) {
		//name = "È«±æµ¿";

		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData() {
		cout << "ÀÌ¸§ : " << name << " " << "\t | ¹øÈ£ : " << id << "\t | ³ªÀÌ : " << age << endl;
	}
};
int main()
{
	/*
	Human h;
	h.setData("Á¤Àç¿µ", 1 , 25);
	*/

	Human h("È«±æµ¿", 1, 30);
	h.getData();

	Human hary[3] = { Human("±è¿µÈñ",2,23),Human("±èÃ¶¼ö",3,25),Human("¾Æ¹«°³",4,35) };
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();
	return 0;
}