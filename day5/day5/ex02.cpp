#include<stdio.h>
void main() {
	/*
	int num, n;
	printf("수 입력 : ");
	scanf_s("%d", &num);
	n = num % 7;
	if (n == 1) { printf("%d 월", num); }
	else if (n == 2) { printf("%d 화", num); }
	else if (n == 3) { printf("%d 수", num); }
	else if (n == 4) { printf("%d 목", num); }
	else if (n == 5) { printf("%d 금", num); }
	else if (n == 6) { printf("%d 토", num); }
	else {printf("%d 일", num);}
	*/
	int time, time1, mon;
	printf("시간 : ");
	scanf_s("%d", &time);
	if (time <= 30) {
		mon = 30000;
	}
	else {
		time1 = time - 30;
		mon = 30000+(time1/10+1)*5000;
	}
	printf("%d 원", mon);

}