#include <stdio.h>

void main()
{
	int a, b;
	char s = ' ';

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
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
			printf ("�����ڸ� �߸� �Է��߽��ϴ�. \n");
	}
}

