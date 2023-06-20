#include <stdio.h>

void main(int argc, char* argv[])
{
	char str[200];
	FILE *rfp;
	FILE *wfp;

	rfp = fopen (argv[1], "r");
	wfp = fopen (argv[2], "w");

	if (argc != 3) {
		printf("\n -- 매개변수 2개를 입력하세요 --\n");
		return;
	}

	for( ; ; ) {
		fgets(str, 199, rfp);

		if(feof(rfp))
			break;

		fputs(str, wfp);
	}
	fclose(rfp);
	fclose(wfp);
}

