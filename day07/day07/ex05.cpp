#include<stdio.h>
void main() {
	int i = 0, sum = 0;
	while (i <= 5) {
		i++;
		sum += i;
	}
	printf("sum : %d, i : %d\n", sum, i);
}