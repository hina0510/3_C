#include<stdio.h>
void main() {
	int num;
	printf("1. ������� 2. �������� 3. ����\n");
	printf(">>> : ");
	scanf_s("%ds", &num);
	if (num == 1)
		printf("���� ������ �����մϴ�!!!!\n");
	if (num == 2)
		printf("����� ������ �����մϴ�!!!!\n");
	if (num == 3)
		printf("������ �����մϴ�!!!!\n");

}