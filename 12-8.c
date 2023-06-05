#include <stdio.h>
#include <malloc.h>

void main() 
{
	int *p;
	int a, i;
	int sum = 0;

	printf("입력할 개수는 ? ");
	scanf("%d", &a);

	p = (int*) malloc(sizeof(int) * a);

	for (i = 0; i < a; i++) {
		printf("%d 번째 숫자 : ", i+1);
		scanf("%d", p+i);
		if (*(p+i) % 2 == 0) 
			sum += *(p+i);
	}
	
	free(p);

	printf("입력한 짝수합 ==> %d ", sum);
}

