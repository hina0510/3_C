#include<stdio.h>
void main() {
	/*
	int ny, by, age;
	printf("����⵵ : ");
	scanf_s("%d", &ny);
	printf("����� �¾ �⵵ : ");
	scanf_s("%d", &by);
	age = ny - by + 1;
	printf("%d ��\n", age);
	*/

	float mu1, mu2, nam;
	printf("ù��° ���� ���� : ");
	scanf_s("%f", &mu1);
	printf("�ι�° ���� ���� : ");
	scanf_s("%f", &mu2);
	nam = 600 - (mu1 + mu2);
	printf("���� ���� : %.2f kg", nam);
}