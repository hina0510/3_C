#include<stdio.h>
void main() {
	int kor, eng, math, avg;
	printf("3���� ���� : ");
	scanf_s("%d%d%d", &kor, &eng, &math);
	avg = (kor + eng + math) / 3;
	if (avg < 70) {
		printf("���հ�");
	}
	else if (kor < 60) {
		printf("���� ���հ�");
	}
	else if (eng < 60) {
		printf("���� ���հ�");
	}
	else if (math < 60) {
		printf("���� ���հ�");
	}
	else printf("�հ�");
}