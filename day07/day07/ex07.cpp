#include<stdio.h>
void main() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == 3)
				break;
			printf("(i)%d : (j)%d\n", i, j);
		}
	}
}