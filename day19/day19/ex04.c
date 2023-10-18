#include<stdio.h>
#include<malloc.h>
struct test{
	int n1, n2, n3;
	char ch1, ch2, ch3;
	double do1, do2;
};
void main() {
	struct test*p=(struct test*)malloc(sizeof(struct test));
	p->n1 = 1000;
	p->n2 = 2000;

	printf("%d, %d\n", (*p).n1, p->n2);
	free(p);
}