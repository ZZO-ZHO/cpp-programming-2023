#include <stdio.h>

int main()
{
	/*int num = 10;
	printf("num : %d\n", num);

	num = 20;
	printf("num : %d\n", num);

	printf("num : %d\n", num);*/
	//const int num = 10;

	//// num = 20;					const로 선언해서 수정 불가능

	//int* p = &num;					// 포인트함수에 num의 주소를 저장
	//printf("p에 저장된 값 : %p\n", p);
	//printf("p에 참조하는 값 : %d\n", *p);2;
	//*p = 100;
	//printf("p가 가르키는 곳의 데이터값 : %d\n", *p);
	//printf("num : %d\n", num);

	const int num = 10;
	
	printf("num :  %d\n", num);
	//const int num = 10;
	
	int* p = &num;
	*p = 100;							// const는 변수를 직접변경하는것은 불가능하지만 포인트변수를 이용하여 수정하는것은 가능
	printf("num : %d\n", num);

	int num1 = 100;
	int num2 = 200;
	const int* pa = &num1;
	printf("       pa : %p\n", pa);
	pa = &num2;
	printf("변경된 pa : %p\n", pa);

	//*pa = 50;

	int* const pb = &num1;				// 중간에 붙은 const는 포인트함수를 상수화
	//pd = &num2;						// 그래서 수정안됨


	return 0;
}