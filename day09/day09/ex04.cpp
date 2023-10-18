#include <stdio.h>

int sumFunc(int n) {
	int sum = n + 100;
	return sum;
}
void main() {
	int s = sumFunc(100);
	printf("s : %d\n", s);
}