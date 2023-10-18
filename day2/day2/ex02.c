#include<stdio.h>
void main() {
	printf("test\n");
	int num = 123;
	char ch = 'D';
	printf("변경 전 num : %d \n", num);
	printf("변경 전 ch : %c \n", ch);
	num = num + 100;
	ch = 'G';
	printf("변경 후 num : %d \n", num);
	printf("변경 후 ch : %c \n", ch);
}