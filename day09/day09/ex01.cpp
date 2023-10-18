#include <stdio.h>
/*
void sumFunc() {
	int i, sum = 0, num;
	printf("수 입력 : ");
	scanf_s("%d", &num);
	for (i = 1; i <= 10; i++) {
		sum += i;
	}
	printf("sum : %d\n", sum);
}
void main() {
	printf("main 시작\n");
	sumFunc();
	printf("main 끝\n");
*/
/*
void sumFunc(int num) {
	int i, sum = 0;

	for (i = 1; i <= num; i++) {
		sum += i;
	}
	printf("sum : %d\n", sum);
}
void main() {
	int num;
	printf("main 시작\n");

	printf("수 입력 : ");
	scanf_s("%d", &num);

	sumFunc(num);
	printf("main 끝\n");
}
*/
int sumFunc(int num) {
	int i, sum = 0;
	
	for (i = 1; i <= num; i++) {
		sum += i;
	}
	return sum;
}
void main() {
	int num;
	printf("main 시작\n");

	printf("수 입력 : ");
	scanf_s("%d", &num);

	int sum = sumFunc(num);
	printf("sum : %d\n", sum);

	printf("main 끝\n");
}