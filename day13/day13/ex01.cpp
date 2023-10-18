#include<stdio.h>
void main() {
	int num[5] = { 4,8,2,7,6 };
	int tmp, i, j;
	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (num[i] > num[j]) {
				tmp = num[i]; num[i] = num[j];
				num[j] = tmp;
			}
		}
		printf("%d", num[i]);
	}
}