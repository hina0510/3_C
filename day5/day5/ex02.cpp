#include<stdio.h>
void main() {
	/*
	int num, n;
	printf("�� �Է� : ");
	scanf_s("%d", &num);
	n = num % 7;
	if (n == 1) { printf("%d ��", num); }
	else if (n == 2) { printf("%d ȭ", num); }
	else if (n == 3) { printf("%d ��", num); }
	else if (n == 4) { printf("%d ��", num); }
	else if (n == 5) { printf("%d ��", num); }
	else if (n == 6) { printf("%d ��", num); }
	else {printf("%d ��", num);}
	*/
	int time, time1, mon;
	printf("�ð� : ");
	scanf_s("%d", &time);
	if (time <= 30) {
		mon = 30000;
	}
	else {
		time1 = time - 30;
		mon = 30000+(time1/10+1)*5000;
	}
	printf("%d ��", mon);

}