#include<stdio.h>
#include<string.h>
void func(char*str) {
	printf("len : %d\n", strlen(str));
	for (int i = 0; i < strlen(str); i++) {
		printf("%c, %c\n", str[i]-32, *(str+i)-32);
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
	}
}
void main() {
	char str[] = "characters";
	func(str);
	printf("main : %s\n", str);
}