#include<stdio.h>
void main() {
	/*
	int n1=0, n2 = 0, sum = 0;
	printf("�� �Է� : ");
	scanf_s("%d", &n1);
	printf("n1 : %d\n", n1);
	printf("�� �Է� : ");
	scanf_s("%d", &n2);
	sum = n1 + n2;
	printf("%d+%d=%d\n", n1, n2, sum);
	*/
	/*
	float f_01, f_02;
	printf("�Ǽ� �Է� : ");
	scanf_s("%f%f", &f_01, &f_02);
	printf("%.2f : %.2f\n", f_01, f_02);
	
	double dou;
	printf("���� �Ǽ� �Է� : ");
	scanf_s("%lf", &dou);
	printf("%.2f\n", dou);
	*/
	char ch;
	printf("���� �ϳ� �Է� : ");
	scanf_s("%c", &ch, 1);
	printf("%c\n", ch);
	char str[20];
	printf("���ڿ� �Է� : ");
	scanf_s("%s", &str, 20);
	printf("%s\n", str);

}