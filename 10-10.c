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

	printf("원래 값			: x=%c, y=%c\n", x, y);

	f1(x, y);
	printf("값을 전달한 후 		: x=%c, y=%c\n", x, y);

	f2(&x, &y);
	printf("주소를 전달한 후 	: x=%c, y=%c\n", x, y);
}


