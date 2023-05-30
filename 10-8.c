#include <stdio.h>

void f1(int a)
{
	a += 1;
	printf("전달받은 a ==> %d\n", a);
}

void main()
{
	int a= 10;

	f1(a);

	printf("f1() 실행 후의 a ==> %d\n", a);
}
