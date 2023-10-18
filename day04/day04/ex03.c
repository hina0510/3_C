#include<stdio.h>
void main() {
	/*
	int su = 10;
	if (su < 5) {
		printf("1.종속문장!!!\n");
	printf("2.종속문장!!!\n");
	printf("3.종속문장!!!\n");
	}
	printf("다음문장!!!\n");

	int su1, su2;
	printf("수 입력 : ");
	scanf_s("%d", &su1);
	if (su1 % 2 == 0) {
		printf("%d 짝수\n", su1);
	}
	if (su1 % 2 == 1) {
		printf("%d 홀수\n", su1);
	}
	printf("수 입력 : ");
	scanf_s("%d", &su2);
	if (su2 % 5 == 0) {
		printf("%d 배수\n", su2);
	}
	if (su2 % 5 != 0) {
		printf("%d 배수아님\n", su2);
	}
	int su3;
	printf("수 입력 : ");
	scanf_s("%d", &su3);
	if (su3 < 0) {
		printf("%d\n", -su3);
	}
	if (su3 >= 0) {
		printf("%d\n", su3);
	}
	
	int n1, n2, n3, max;
	printf("세 수 입력 : ");
	scanf_s("%d%d%d", &n1, &n2, &n3);
	if (n1 > n2)
	{
		max = n1;
	}
	if (n1 < n2)
	{
		max = n2;
	}
	if (n3 > max)
	{
		max = n3;
	}
	printf("가장 큰 수 : %d\n", max);
	
	int su1, su2;
	printf("두 수 입력 : ");
	scanf_s("%d%d", &su1, &su2);
	if (su1 > su2 && su1 % 2 == 0)
	{
		printf("%d\n", su1);
	}
	if (su1 < su2 && su2 % 2 == 0)
	{
		printf("%d\n", su2);
	}
	*/
	int su3, su4;
	printf("두 수 입력 : ");
	scanf_s("%d%d", &su3, &su4);
	if ((su3 + su4)%2==0 && (su3 + su4) % 3 == 0)
	{
		printf("%d %d\n", su3, su4);
	}
	
}