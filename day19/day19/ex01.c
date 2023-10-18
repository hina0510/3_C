#include<stdio.h>
#include<stdlib.h>

void main() {
	void* p = malloc(4);
	char* c = (char*)p;

	int* pt = (int*)malloc(4);
	*pt = 1000;
	printf("%d\n", *pt);
	free(pt);
	printf("%d\n", *pt);
}