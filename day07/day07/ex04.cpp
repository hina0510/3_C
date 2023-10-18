#include<stdio.h>
void main() {
	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			printf("%d\n", i);
			continue;
		}
		printf("%d\n", i);
	}
}