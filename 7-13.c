#include <stdio.h>

void main()
{
	int min, max, a, hap=0;
	
	printf("�հ��� ���۰� ==> ");
	scanf("%d", &min);

	printf("�հ��� ���� ==> ");
	scanf("%d", &max);

	printf("��� ==> ");
	scanf("%d", &a);

	for ( ; min <= max; min++){
		if ( min % a == 0) {
			hap += min;
		}
	}
		


	printf("%d���� %d ������ %d����� �հ� == > %d", min, max, a, hap);
		

}
