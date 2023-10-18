#include<stdio.h>
#include<stdlib.h>
void main() {
	int num=0, data=0;
	while (1)
	{
		printf("==============\n");
		printf("1.데이터 입력\n");
		printf("2.데이터 출력\n");
		printf("3.종료\n");
		printf("==============\n");
		printf(">>> : \n");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			printf("데이터 입력 : ");
			scanf_s("%d", &data);
			break;
		case 2:
			printf("입력한 데이터 : %d\n", data);
			break;
		case 3:exit(1);
		}
		system("pause");
		system("cls");
	}
	
}