#include <stdio.h>

void main()
{
	int a, b;
	char s = ' ';

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d", &a);
	scanf(" %c", &s);
	scanf("%d", &b);
	switch (s)
	{
		case '+' :
			printf("%d + %d = %d \n", a, b, a+b);
			break;
		case '-' :
			printf("%d - %d = %d \n", a, b, a-b);
			break;
		case '*' :
			printf("%d * %d = %d \n", a, b, a*b);
			break;
		case '/' :
			printf("%d / %d = %d \n", a, b, a/b);
			break;
		case '%' :
			printf("%d %% %d = %d \n", a, b, a%b);
			break;
		default :
			printf ("연산자를 잘못 입력했습니다. \n");
	}
}

