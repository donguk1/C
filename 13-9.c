#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student {
		char name[10];
		int age;
	};

//	struct student *s;
	int num;
	
	printf("�Է��� �л� ��  : ");
	scanf("%d", &num);

	struct student* s = (struct student*) malloc(sizeof(struct student) * num);

	for(int i = 0; i < num; i++) {
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", s[i].name, &s[i].age);
	}

	printf("\n\n--�л� ���--\n");

	for(int i = 0; i < num; i++) {
		printf("�̸�:%s , ����:%d\n", s[i].name, s[i].age);
	}

	free(s);
}
