/*
메모리 동적 할당
*/
#include <iostream>
using namespace std;

int main()
{
	int* arr;
	int size;

	printf("배열방의 개수 : ");
	scanf("%d", &size);

	arr = (int*)malloc(sizeof(int));
	
	printf("만들어진 배열 크기 : %d\n",sizeof(int) * size);
	printf("%d\n", sizeof(int));

	free(arr);

	return 0;
}