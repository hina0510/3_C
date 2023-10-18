#include<stdio.h>
void main() {
	char str[10] = "test";
	char* p = str;
	printf("%u\n", p);
	printf("%u\n", str);
	printf("%c\n", *p);
	printf("%c\n", *str);
	printf("%c\n", p[0]);
	printf("%c\n", str[0]);

	const char KOREA[100] = "¥Î«—πŒ±π";
	int arr[10];
	int n;
	int* pi;
	pi = arr;
	printf("%u\n", arr);
	printf("%u\n", pi);
	pi = &n;
	printf("%u\n", &n);
	printf("%u\n", pi);



}