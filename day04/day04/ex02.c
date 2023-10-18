#include<stdio.h>
void main() {
	int num;
	printf("1. 쉬운게임 2. 어려운게임 3. 종료\n");
	printf(">>> : ");
	scanf_s("%ds", &num);
	if (num == 1)
		printf("쉬운 게임을 시작합니다!!!!\n");
	if (num == 2)
		printf("어려운 게임을 시작합니다!!!!\n");
	if (num == 3)
		printf("게임을 종료합니다!!!!\n");

}