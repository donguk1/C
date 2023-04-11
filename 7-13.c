#include <stdio.h>

void main()
{
	int min, max, a, hap=0;
	
	printf("합계의 시작값 ==> ");
	scanf("%d", &min);

	printf("합계의 끝값 ==> ");
	scanf("%d", &max);

	printf("배수 ==> ");
	scanf("%d", &a);

	for ( ; min <= max; min++){
		if ( min % a == 0) {
			hap += min;
		}
	}
		


	printf("%d부터 %d 까지의 %d배수의 합계 == > %d", min, max, a, hap);
		

}
