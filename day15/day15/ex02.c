#include<stdio.h>
void main() {
	char ch02;
	ch02 = getchar();
	printf("문자 : %c\n", ch02);

	char str[10];
	printf("입력 : ");
	scanf_s("%[^\n]", str, 10);
	//문자의 공백이 있는 경우 뒤의 arr 입력 없이 공백전과 후를 따로 출력

	char arr[10];
	printf("입력 : ");
	getchar();
	scanf_s("%[^\n]", arr, 10);
	//문자의 공백이 있는 경우 뒤의 문자가 나오지 않음

	printf("출력 : %s\n", str);
	printf("출력 : %s\n", arr);

}