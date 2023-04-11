#include <stdio.h>

void main()
{
	int i, s, hap = 0;
	
	printf("값 입력 : ");
	scanf("%d", &s);

	for (i = 1; i <= s; i++) {
		hap += i;
	}
	printf("1에서 %d까지의 합 : %d \n", s, hap);
}
