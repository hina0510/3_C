#include<stdio.h>
void main() {
	/*
	int su;
	su = 8;
	(su % 2 == 0) ? printf("%d Â¦¼ö\n", su) : printf("%d È¦¼ö\n", su);
	su = 9;
	(su % 2 == 0) ? printf("%d Â¦¼ö\n", su) : printf("%d È¦¼ö\n", su);
	*/
	int su1, su2, su3, su4;
	printf("¼ö ÀÔ·Â : ");
	scanf_s("%d", &su1);
	if (su1 % 2 == 0) {
		printf("%d Â¦¼ö\n", su1);
	} 
	if (su1 % 2 == 1) {
		printf("%d È¦¼ö\n", su1);
	}

	printf("¼ö ÀÔ·Â : ");
	scanf_s("%d", &su2);
	(su2 % 3 == 0) ? printf("%d 3ÀÇ ¹è¼ö\n", su2) : printf("%d ¹è¼ö¾Æ´Ô\n", su2);
	printf("¼ö ÀÔ·Â : ");
	scanf_s("%d%d", &su3, &su4);
	(su3 > su4) ? printf("%d\n", su3) : printf("%d\n", su4);
}