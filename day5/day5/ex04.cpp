#include<stdio.h>
#include<stdlib.h>
void main() {
	int num=0, data=0;
	while (1)
	{
		printf("==============\n");
		printf("1.������ �Է�\n");
		printf("2.������ ���\n");
		printf("3.����\n");
		printf("==============\n");
		printf(">>> : \n");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			printf("������ �Է� : ");
			scanf_s("%d", &data);
			break;
		case 2:
			printf("�Է��� ������ : %d\n", data);
			break;
		case 3:exit(1);
		}
		system("pause");
		system("cls");
	}
	
}