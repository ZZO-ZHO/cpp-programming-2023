#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Myclass
{
    int num;
    char* name;
public:
    Myclass(int n, const char* name) : num(n)
    {
        cout << "������ ȣ��" << endl;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    explicit Myclass(const Myclass& other)
    {
        cout << "��������� ȣ��" << endl;
        this->name = new char[strlen(other.name) + 1];
        this->num = other.num;
    }
    void getData()
    {
        cout << num << ", " << name << endl;
    }
    ~Myclass()
    {
        cout << "�޸� ����" << endl;
        delete[] this->name;
    }
};

/*
int main()
{
    Myclass m1(1, "ȫ�浿");  // ������ ȣ�� / ��ü ���� 
    m1.getData();
    Myclass m2(m1);
    m2.getData();

    return 0;
}
*/

int func(int n)
{
    std::cout << "�Լ���Ģ" << endl;
    return n + 1;
}

int main()
{
    int num = 10;
    int res;
    res = func(num);
}