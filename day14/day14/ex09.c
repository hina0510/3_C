#include<stdio.h>
void func(char*arr) {
	printf("%s\n", arr);
	arr[0] = arr[0] - 32;
	*(arr + 1) = *(arr + 1) - 32;
	printf("%s\n", arr);
}
void main() {
	char str[] = "characters";
	func(str);
}