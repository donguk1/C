#include <stdio.h>

void f1(int a)
{
	a += 1;
	printf("���޹��� a ==> %d\n", a);
}

void main()
{
	int a= 10;

	f1(a);

	printf("f1() ���� ���� a ==> %d\n", a);
}
