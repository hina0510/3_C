#include<stdio.h>
void main() {
	int kor, eng, math, sum;
	float avg;
	char na[20];
	printf("---- �Է� ��� ----\n");
	printf("�̸� : ");
	scanf_s("%s", na, 20);
	printf("��, ��, �� ���� : ");
	scanf_s("%d%d%d", &kor, &eng, &math);
	sum = kor + eng + math;
	avg = sum / 3.0;
	
	if (avg > 90)printf("A\n");
	else if (avg > 80)printf("B\n");
	else if (avg > 70)printf("C\n");
	else if (avg > 60)printf("D\n");
	else if (avg < 60)printf("F\n");

	printf("---- ��� ��� ----\n");
	printf("%s ���� ���\n", na);
	printf("���� ���� : %d, ���� ���� : %d, ���� ���� : %d\n", kor, eng, math);
	printf("�հ� : %d, ��� : %.2f, ��� : ", sum, avg);
}