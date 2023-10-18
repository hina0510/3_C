#include<stdio.h>
#include<stdlib.h>
void main() {
	/*
	int mon, mon1, num, pr1 = 200, pr2 = 250;
	printf("요금을 투입하세요 : ");
	scanf_s("%d", &mon);
	while (1) {
		printf("===================\n");
		printf("1. 커피(200)\n");
		printf("2. 코코아(250)\n");
		printf("3. 반환\n");
		printf("4. 추가\n");
		printf("5. 종료\n");
		printf("===================\n");
		printf("잔액 : %d\n", mon);
		printf("입력 : ");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			if (mon >= pr1) {
				mon = mon - pr1;
				printf("맛있게 드세요\n");
			}
			else printf("요금이 부족합니다.\n");
			break;
		case 2:
			if (mon >= pr2) {
				mon = mon - pr2;
				printf("맛있게 드세요\n");
			}
			else printf("요금이 부족합니다.\n");
			break;
		case 3:
			printf("%d\n", mon);
			mon = 0;
			break;
		case 4:
			printf("요금을 투입하세요 : ");
			scanf_s("%d", &mon1);
			mon = mon + mon1;
			break;
		case 5:
			break;exit(1);
		}
		system("pause");
		system("cls");
	}
	
	int ri = 100000, mou = 2, day;
	for (day = 1;0 < ri;day++) {
		//ri -= mou * 20;
		if (day % 10 == 0) {
			mou *= 2;
		}
		ri -= mou * 20;
		if (ri < 0)break;
		printf("day : %d, mouse : %d, ri : %d\n", day, mou, ri);
	}
	printf("day : %d, mouse : %d", day, mou);
	*/
	int ri = 100000, mou = 2, day;
	for (day = 1; 0 < ri; day++) {
		//ri -= mou * 20;
		if (day % 10 == 0) {
			mou *= 2;
		}
		printf("day : %d, mouse : %d, ri : %d\n", day, mou, ri);
		ri -= mou * 20;
	}
	printf("day : %d, mouse : %d, ri : %d\n", day, mou, ri);
}