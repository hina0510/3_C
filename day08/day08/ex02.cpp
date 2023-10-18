#include<stdio.h>
void main() {
	int sum = 0;
	for (int i = 0; i <= 10; i++) {
		printf("for 시작 ===\n");
		if (i % 2 == 0) {
			sum += i;
		}
		printf("===for 끝\n");
	}
	printf("1111111\n");
	printf("1111111\n");
	for (int i = 0; i <= 10; i++) {
		printf("for 시작 ===\n");
		if (i % 2 == 0) {
			sum += i;
		}
		printf("===for 끝\n");
	}
	printf("2222222\n");
	printf("3333333\n");
	printf("4444444\n");
	printf("5555555\n");
}