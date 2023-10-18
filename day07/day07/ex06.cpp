#include<stdio.h>
#define TRUE 1
void main() {
	int i, j=0, temp;
	printf("¼öÀÔ·Â : ");
	scanf_s("%d", &i);
	/*
	while (TRUE) {
		temp = i % 10;
		i = i / 10;
		printf("%d, ", temp);
		if (i == 0)
			break;
	}
	*/
	while (TRUE) {
		temp = i % 10;
		i = i / 10;
		j = (j + temp) * 10;
		if (i == 0)
			break;
	}
	printf("%d, ", j/10);
}