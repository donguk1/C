#include <stdio.h>
#include <malloc.h>

void main() 
{
	int *p;
	int a, i;
	int sum = 0;

	printf("�Է��� ������ ? ");
	scanf("%d", &a);

	p = (int*) malloc(sizeof(int) * a);

	for (i = 0; i < a; i++) {
		printf("%d ��° ���� : ", i+1);
		scanf("%d", p+i);
		if (*(p+i) % 2 == 0) 
			sum += *(p+i);
	}
	
	free(p);

	printf("�Է��� ¦���� ==> %d ", sum);
}

