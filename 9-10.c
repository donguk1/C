#include <stdio.h>

void main()
{
	int a;
	printf("a 값 입력 : ");
	scanf("%d", &a);

	int b;
	printf("b 값 입력 : ");
	scanf("%d", &b);

	int* tmp;
	
	int* p1;
	p1 = &a;

	int* p2;
	p2 = &b;
	

	tmp = p1;
	p1 = p2;
	p2 = tmp;

	printf("바뀐 값 a 는 %d, b는 %d", *p1, *p2);
}
