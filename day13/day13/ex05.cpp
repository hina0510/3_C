#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main() {
	char str[3][20] = { "������ ����","������ ����","������ �" };
	char arr[3][20] = {"�̼�����", "�߿���", "��~"};
	srand(time(0));
	int num = rand() % 3;
	printf("===����===\n");
	printf("%s\n", str[num]);

	printf("%s\n", str[1]);
	printf("%s\n", str[2]);