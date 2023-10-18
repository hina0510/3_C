#include<stdio.h>
void main() {
	/*
	int n1=0, n2 = 0, sum = 0;
	printf("수 입력 : ");
	scanf_s("%d", &n1);
	printf("n1 : %d\n", n1);
	printf("수 입력 : ");
	scanf_s("%d", &n2);
	sum = n1 + n2;
	printf("%d+%d=%d\n", n1, n2, sum);
	*/
	/*
	float f_01, f_02;
	printf("실수 입력 : ");
	scanf_s("%f%f", &f_01, &f_02);
	printf("%.2f : %.2f\n", f_01, f_02);
	
	double dou;
	printf("더블 실수 입력 : ");
	scanf_s("%lf", &dou);
	printf("%.2f\n", dou);
	*/
	char ch;
	printf("문자 하나 입력 : ");
	scanf_s("%c", &ch, 1);
	printf("%c\n", ch);
	char str[20];
	printf("문자열 입력 : ");
	scanf_s("%s", &str, 20);
	printf("%s\n", str);

}