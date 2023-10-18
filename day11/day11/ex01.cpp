#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {
	printf("time : %u\n", time(0));
	srand(time(0));
	for (int i = 0; i < 6; i++) {
		int ran = rand();
		printf("%d\n", ran%45+1);
	}
}