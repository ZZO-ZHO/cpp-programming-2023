#include <stdio.h>

int main()
{
	/*int num = 10;
	printf("num : %d\n", num);

	num = 20;
	printf("num : %d\n", num);

	printf("num : %d\n", num);*/
	//const int num = 10;

	//// num = 20;					const�� �����ؼ� ���� �Ұ���

	//int* p = &num;					// ����Ʈ�Լ��� num�� �ּҸ� ����
	//printf("p�� ����� �� : %p\n", p);
	//printf("p�� �����ϴ� �� : %d\n", *p);2;
	//*p = 100;
	//printf("p�� ����Ű�� ���� �����Ͱ� : %d\n", *p);
	//printf("num : %d\n", num);

	const int num = 10;
	
	printf("num :  %d\n", num);
	//const int num = 10;
	
	int* p = &num;
	*p = 100;							// const�� ������ ���������ϴ°��� �Ұ��������� ����Ʈ������ �̿��Ͽ� �����ϴ°��� ����
	printf("num : %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;
	printf("       pa : %p\n", pa);
	pa = &num2;
	printf("����� pa : %p\n", pa);

	//*pa = 50;

	int* const pb = &num1;				// �߰��� ���� const�� ����Ʈ�Լ��� ���ȭ
	//pd = &num2;						// �׷��� �����ȵ�


	return 0;
}