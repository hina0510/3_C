#include<stdio.h>
void main() {
	int arr[5] = { 10,20,30 };
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("======\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}
	printf("======\n");
	int n;
	printf("%d\n", sizeof(n));
	printf("%d %d\n", sizeof(arr),sizeof(int));
	printf("%d\n", sizeof(arr) / sizeof(int));
	printf("======\n");
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d\n", arr[i]);
	}
}