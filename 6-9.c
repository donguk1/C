#include <stdio.h>

void main()
{
	int i, s, hap = 0;
	
	printf("�� �Է� : ");
	scanf("%d", &s);

	for (i = 1; i <= s; i++) {
		hap += i;
	}
	printf("1���� %d������ �� : %d \n", s, hap);
}
