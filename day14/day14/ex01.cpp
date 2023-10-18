#include<stdio.h>
void main() {
	int * num;
	int su = 100;
	num = &su;
	printf("%d\n", su);
	printf("%u\n", &su);
}