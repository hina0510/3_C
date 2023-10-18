#include<stdio.h>
void main() {
	/*
	int n1 = 20, n2 = 3;
	printf("%d / %d = %d\n", n1, n2, n1 / n2);
	printf("%d / %d = %f\n", n1, n2, n1 / (float)n2);
	printf("%d %% %d = %d\n", n1, n2, n1 % n2);
	*/
	int num1 = 10, num2 = 20;
	/*
	printf("%d<=%d : %d\n", num1, num2, num1 <= num2);
	printf("%d>=%d : %d\n", num1, num2, num1 >= num2);
	printf("%d==%d : %d\n", num1, num2, num1 == num2);
	printf("%d!=%d : %d\n", num1, num2, num1 != num2);
	
	int su1, su2;
	su1 = su2 = 5;
	su1 += 1;
	printf("%d\n", su1);
	su1 -= 1;
	printf("%d\n", su1);
	su1 *= su2;
	printf("%d\n", su1);
	su1 /= su2;
	printf("%d\n", su1);
	su1 %= su2;
	printf("%d\n", su1);
	printf("%d\n", 1 && 1);
	printf("%d\n", 1 && 0);
	printf("%d\n", 1 || 1);
	printf("%d\n", 0 || 0);
	printf("%d\n", !1);
	printf("%d\n", !0);
	int number = 5;
	printf("%d\n", (number < 20)&& (number %2)!=0);
	*/
	int n = 10;
	++n;
	printf("%d\n", n);
	n++;
	printf("%d\n", n);
	--n;
	printf("%d\n", n);
	n--;
	printf("%d\n", n);
	n = 10;
	num1 = n++;
	printf("%d, %d\n", num1, n);
	n = 10;
	num2 = n++;
	printf("%d, %d\n", num2, n);
}