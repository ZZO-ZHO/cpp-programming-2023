/*
�޸� ���� �Ҵ�
*/
#include <iostream>
using namespace std;

int main()
{
	int* arr;
	int size;

	printf("�迭���� ���� : ");
	scanf("%d", &size);

	arr = (int*)malloc(sizeof(int));
	
	printf("������� �迭 ũ�� : %d\n",sizeof(int) * size);
	printf("%d\n", sizeof(int));

	free(arr);

	return 0;
}