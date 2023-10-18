#include<stdio.h>
void main() {
	/*
	int ny, by, age;
	printf("현재년도 : ");
	scanf_s("%d", &ny);
	printf("당신이 태어난 년도 : ");
	scanf_s("%d", &by);
	age = ny - by + 1;
	printf("%d 살\n", age);
	*/

	float mu1, mu2, nam;
	printf("첫번째 물건 무게 : ");
	scanf_s("%f", &mu1);
	printf("두번째 물건 무게 : ");
	scanf_s("%f", &mu2);
	nam = 600 - (mu1 + mu2);
	printf("남은 무게 : %.2f kg", nam);
}