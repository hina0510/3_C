#include<stdio.h>
void main() {
	char str[10];
	printf("test ют╥б : ");
	scanf_s("%s", str, 10);
	for (int i = 0; str[i] != 0; i++) {
		printf("%c ", str[i]);
	}
	printf("\n%s\n", str);
}