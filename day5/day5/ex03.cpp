#include<stdio.h>
void main() {
	int num;
	printf("�� �Է� : ");
	scanf_s("%d", &num);
	switch (num) {
	case 1:printf("1�Է�"); break;
	case 2:printf("2�Է�"); break;
	default:printf("1,2�� ������ ���Է�");
	}
}