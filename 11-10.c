#include <stdio.h>

void main()
{
	FILE *wfp;
	wfp = fopen("c:\\c_study\\gugu.txt", "w");

	int i, k;

	for (i = 2; i <= 9; i++) {
		fprintf(wfp, "#��%d��#\t\t", i);
	}
	fprintf(wfp, "\n\n");

	for (i = 1; i <= 9; i++) {
		for ( k = 2; k <= 9; k++) {
			fprintf(wfp, "%d X %d = %2d\t", k, i, k*i);
		}
		fprintf(wfp, "\n");
	}
	fclose(wfp);
}
