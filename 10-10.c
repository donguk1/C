#include <stdio.h>

void f1(char a, char b)
{
	int imsi = a;
	a = b;
	b = imsi;
}

void f2(char *a, char *b)
{
	int imsi;

	imsi = *a;
	*a = *b;
	*b = imsi;
}

void main()
{
	char x = 'A', y = 'Z';

	printf("���� ��			: x=%c, y=%c\n", x, y);

	f1(x, y);
	printf("���� ������ �� 		: x=%c, y=%c\n", x, y);

	f2(&x, &y);
	printf("�ּҸ� ������ �� 	: x=%c, y=%c\n", x, y);
}


