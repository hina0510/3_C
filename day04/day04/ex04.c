#include<stdio.h>
void main() {
	/*
	int num1, num2;
	printf("두 수 입력 : ");
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2) {
		printf("num1이 크다\n");
	}
	else{
		printf("num2가 크다\n");
	}
	printf("다음");
	*/
	int n = 12;
	if (n % 3 == 0) {
		if (n % 2 == 0) {
			printf("3의 배수며 짝수다");
		}
		else {
			printf("3의 배수다");
		}
	else {
		printf("3의 배수도 아니고 짝수도 아니다");
	}
	}
}