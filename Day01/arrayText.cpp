#include <iostream>

int main()
{
	char ch[5] = "hong";			// �迭 ����
	ch[0] = 'h';					// �����ϳ��� ����
	ch[1] = 'o';
	ch[2] = 'n';
	ch[3] = 'g';
	ch[4] = 'a';

	for (int i = 0; i < 5; i++) {
		printf("%c", ch[i]);
	}
	printf("\n");
	//printf("char ũ�� : %d\n", sizeof(char));		// ��� char ũ�� : 1 (= 1byte)
	//printf("%s\n", ch);

	//printf("%c\n", ch[4]);
	//printf("%s\n", ch[4]);

	//ch[0] = 'a';

	printf("�迭�̸� ch : %p\n", ch);
	printf("�迭�ּ� ch : %p\n", &ch);

	return 0;
}