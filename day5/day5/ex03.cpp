#include<stdio.h>
void main() {
	int num;
	printf("수 입력 : ");
	scanf_s("%d", &num);
	switch (num) {
	case 1:printf("1입력"); break;
	case 2:printf("2입력"); break;
	default:printf("1,2를 제외한 값입력");
	}
}