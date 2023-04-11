#include <stdio.h>

void main()
{
	int i, dan;

	printf("몇단을 할지 지정하시오 \n");
	scanf("%d", &dan);

	for (i = 1; i <= 9 ; i++) {
		printf("%d X %d = %d \n", dan, i ,dan*i);
	}
}

