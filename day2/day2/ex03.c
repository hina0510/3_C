#include<stdio.h>
void main() {
	printf("test");
	double fl = 1.123;
	float fl02 = 1.123;
	int num1 = 10, num2 = 3;
	printf("%d\n", num1 / num2);
	printf("%f\n", num1 / (float)num2);
	printf("%d, %f\n", num1 , (float)num1);
	printf("%d\n", num1);
	char str[20] = "�ȳ��ϼ���";
	printf("%s\n", str);
	char str2[6] = "12345";
	printf("%s\n", str2);
	printf("%d\n", NULL);
	char str3[11] = "�ȳ��ϼ���";
	printf("%s\n", str3);
}