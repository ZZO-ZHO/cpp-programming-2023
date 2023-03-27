#include <iostream>

int main()
{
	char ch[5] = "hong";			// 배열 선언
	ch[0] = 'h';					// 문자하나씩 저장
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a';

	for (int i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}
	printf("\n");
	//printf("char 크기 : %d\n", sizeof(char));		// 결과 char 크기 : 1 (= 1byte)
	//printf("%s\n", ch);

	//printf("%c\n", ch[4]);
	//printf("%s\n", ch[4]);

	//ch[0] = 'a';

	printf("배열이름 ch : %p\n", ch);
	printf("배열주소 ch : %p\n", &ch);

	return 0;
}