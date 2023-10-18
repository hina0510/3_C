#include<stdio.h>
void main() {
	int num = 123;
	printf("%d\n", num);
	printf("%5d\n", num);
	printf("%-5d\n", num);
	float fl = 1.123;
	printf("%3.3f\n", fl);
	printf("%10.1f\n", fl);

	float fl_02 = 1.123456789;
	printf("%.10f\n", fl_02);
	double dou = 1.123456789;
	printf("%.10f\n", dou);
}