#include<stdio.h>
void main() {
	/*
	int i;
	int sum = 0;
	for (i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("%d", sum);
	
	int i;
	for (i = 1; i <= 30; i++){
		printf("%d ", i);
		if (i % 5 == 0)printf("\n");
	}
	
	int i, j = 0, sum1 = 0, sum2 = 0;
	printf("입력 : ");
	scanf_s("%d", &j);
	for (i = 1; i <= j; i++) {
		if (i % 2 == 0) {
			sum1 += i;
		}
		else {
			sum2 += i;
		}
	}
	printf("짝수 합 : %d, 홀수 합 : %d", sum1, sum2);
	
	int i = 0, j = 0, min = 0, max = 0, sum = 0;
	printf("두 수 입력 : ");
	scanf_s("%d%d", &i, &j);
	if (i > j)max = i, min = j;
	else max = j, min = i;
	for (int i = min; i <= max; i++) {
		sum += i;
	}
	printf("%d ~ %d : %d", min, max, sum);
	*/
	int i, j;
	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}
}