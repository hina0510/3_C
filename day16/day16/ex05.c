#include<stdio.h>
#include<stdlib.h>
struct stInfo {
	int age;
	char name[20], stna[20], phna[20];
};
typedef struct stInfo STINFO;
void main() {
	int num;
	struct stInfo n1;
	STINFO stin[5];
	while (1) {
		printf("1. 학생정보 등록\n");
		printf("2. 특정 학생 정보 보기\n");
		printf("3. 모든 학생 정보 보기\n");
		printf("4. 끝내기\n");
		printf("> ");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			for (int i = 0; i < sizeof(stin) / sizeof(STINFO); i++) {
				printf("\n이름 입력 : ");
				scanf_s("%s", &stin[i].name, 20);
				printf("\n나이 입력 : ");
				scanf_s("%d", &stin[i].age);
				printf("\n학번 입력 : ");
				scanf_s("%s", &stin[i].stna, 20);
				printf("\n전화번호 입력 : ");
				scanf_s("%s", &stin[i].phna, 20);
			}
			break;
		case 2:
			printf("학번 : ");
			scanf_s("%s", n1.stna, 20);
			for (int i = 0; i < sizeof(stin) / sizeof(STINFO); i++) {
				if (strcmp(stin[i].stna, n1.stna) == 0) {
					printf("이름 : %s, 나이 : %d, 학번 : %s, 전화번호 : %s\n", stin[i].name, stin[i].age, stin[i].stna, stin[i].phna);
				}
			}
			break;
		case 3:
			for (int i = 0; i < sizeof(stin) / sizeof(STINFO); i++) {
				printf("이름 : %s, 나이 : %d, 학번 : %s, 전화번호 : %s\n", stin[i].name, stin[i].age, stin[i].stna, stin[i].phna);
			}
			break;
		case 4: exit(1);
		}
		system("pause");
		system("cls");
	}
}