#include <iostream >

int main(void)			// �Լ��� �Ӹ�
{					// �Լ��� ����
	char name[100];
	char lang[200];

	std::cout << "�̸��� �����Դϱ�? ";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����Դϱ�? ";
	std::cin >> lang;

	std::cout << "�� �̸��� " << name << "�Դϴ�.\n";
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;
	
	return 0;
}					// �Լ���
