#include<stdio.h>
void main() {
	char str[20];
	printf("문자열 입력 : ");
	gets_s(str, 20); //공백입력가능
	printf(str);
	printf("%s\n", str);
}