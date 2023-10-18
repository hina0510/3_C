#include<stdio.h>
void main() {
	int num = 1234;
	int* n;
	n = &num;

	int** nn = &n;
	int*** nnn = &nn;
	printf("num ; %d\n", num);
	printf("n ; %d\n", *n);
	printf("nn ; %d\n", **nn);
	printf("nnn ; %d\n", ***nnn);
}