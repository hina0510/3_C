#include<stdio.h>
void main() {
	/*
	int arr[5];
	printf("�� �Է�(5) : ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d��° : %d\n", i, arr[i]);
	}
	*/
	char str[20] = { "test" };
	printf("%c %c %c %c\n", str[0], str[1], str[2], str[3]);
	printf("%s\n", str);
	printf("%d, %d\n", sizeof(char), sizeof(str));
	printf("���ڿ� �Է� : ");
	scanf_s("%s", str, sizeof(str));
}