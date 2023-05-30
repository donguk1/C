#include <stdio.h>

int a = 100;

void f1()
{
	int a = 200;
	printf("f1() 의 값 ==> %d\n", a);
}

void main()
{
	f1();
	printf("main() 에서 a의 값 ==> %d\n", a);
}
