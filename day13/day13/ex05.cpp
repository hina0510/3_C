#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {
	char str[3][20] = { "오늘의 날씨","내일의 날씨","오늘의 운세" };
	char arr[3][20] = {"미세먼지", "추워짐", "굿~"};
	srand(time(0));
	int num = rand() % 3;
	printf("===문제===\n");
	printf("%s\n", str[num]);

	printf("%s\n", str[1]);
	printf("%s\n", str[2]);