#include<stdio.h>
void main() {
	char str[10] = "test";
	int arr[10] = { 10,20,30 };
	double dou[10] = { 1.11,2.22 };
	char* pc = str;
	int* pi = arr;
	double* pd = dou;
	printf("%c %c %c\n", str[0], *(str + 1), str[2]);
	printf("%c %c %c\n", pc[0], *(pc + 1), pc[2]);
	printf("%p %p\n", pc+0, pc + 1);

	printf("%d %d %d\n", arr[0], *(arr + 1), arr[2]);
	printf("%d %d %d\n", pi[0], *(pi + 1), pi[2]);
	printf("%p %p\n", pi + 0, pi + 1);

	printf("%.2f %.2f %.2f\n", dou[0], *(dou + 1), dou[2]);
	printf("%.2f %.2f %.2f\n", pd[0], *(pd + 1), pd[2]);
	printf("%p %p\n", pd + 0, pd + 1);
}