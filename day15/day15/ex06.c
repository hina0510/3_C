#include<stdio.h>
void main() {
	int num1, num2, max;
	printf("두 수 입력 : ");
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2) {
		max = num1;
	}
	else {
		max = num2;
	}
	printf("큰 수 : %d\n", max);

	char *ch[1];
	printf("문자 입력 : ");
	getchar();
	scanf_s("%c", &ch, 1);
	for (int i = 0;i<1; i++) {
		printf("%c\n", ch[i] - 32);
	}

	int num3, sum=0;
	printf("수 입력 : ");
	scanf_s("%d", &num3);
	for (int i = 1; i <= num3; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}