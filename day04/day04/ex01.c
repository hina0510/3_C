#include<stdio.h>
void main() {
	/*
	int su;
	su = 8;
	(su % 2 == 0) ? printf("%d ¦��\n", su) : printf("%d Ȧ��\n", su);
	su = 9;
	(su % 2 == 0) ? printf("%d ¦��\n", su) : printf("%d Ȧ��\n", su);
	*/
	int su1, su2, su3, su4;
	printf("�� �Է� : ");
	scanf_s("%d", &su1);
	if (su1 % 2 == 0) {
		printf("%d ¦��\n", su1);
	} 
	if (su1 % 2 == 1) {
		printf("%d Ȧ��\n", su1);
	}

	printf("�� �Է� : ");
	scanf_s("%d", &su2);
	(su2 % 3 == 0) ? printf("%d 3�� ���\n", su2) : printf("%d ����ƴ�\n", su2);
	printf("�� �Է� : ");
	scanf_s("%d%d", &su3, &su4);
	(su3 > su4) ? printf("%d\n", su3) : printf("%d\n", su4);
}