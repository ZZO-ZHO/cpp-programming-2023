#include <stdio.h>

int main() {
	/*
	int num = 10;
	int num1;
	num1 = 20;
	num = 30;

	char ch;
	printf("ch크기 : %d\n", sizeof(char));

	double d = 3.14;
	printf("double 크기 : %d\n", sizeof(double));*/

	char ch = 0x7f;

	unsigned char ch1 = 0x7f;
	printf("ch : %x \t ch : %d\n", ch, ch);
	printf("ch1 : %x \t ch1 : %d\n", ch1, ch1);

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;
	printf("ch2 : %x \t ch2 : %d\n", ch2, ch2);
	printf("uch2 : %x \t uch2 : %d\n", uch2, uch2);

	uch2 = uch2 << 1;
	ch2 = ch2 << 1;
	printf("uch2 << 1: %x\t ch2 << 1: %x\n\n", uch2,ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1 : %x\t ch2 >> 1: %x\n\n", uch2, ch2);

	return 0;
}

int num1;
int& num2;
num2 = num1;

int& num3 = num1;