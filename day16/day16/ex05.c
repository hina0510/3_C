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
		printf("1. �л����� ���\n");
		printf("2. Ư�� �л� ���� ����\n");
		printf("3. ��� �л� ���� ����\n");
		printf("4. ������\n");
		printf("> ");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			for (int i = 0; i < sizeof(stin) / sizeof(STINFO); i++) {
				printf("\n�̸� �Է� : ");
				scanf_s("%s", &stin[i].name, 20);
				printf("\n���� �Է� : ");
				scanf_s("%d", &stin[i].age);
				printf("\n�й� �Է� : ");
				scanf_s("%s", &stin[i].stna, 20);
				printf("\n��ȭ��ȣ �Է� : ");
				scanf_s("%s", &stin[i].phna, 20);
			}
			break;
		case 2:
			printf("�й� : ");
			scanf_s("%s", n1.stna, 20);
			for (int i = 0; i < sizeof(stin) / sizeof(STINFO); i++) {
				if (strcmp(stin[i].stna, n1.stna) == 0) {
					printf("�̸� : %s, ���� : %d, �й� : %s, ��ȭ��ȣ : %s\n", stin[i].name, stin[i].age, stin[i].stna, stin[i].phna);
				}
			}
			break;
		case 3:
			for (int i = 0; i < sizeof(stin) / sizeof(STINFO); i++) {
				printf("�̸� : %s, ���� : %d, �й� : %s, ��ȭ��ȣ : %s\n", stin[i].name, stin[i].age, stin[i].stna, stin[i].phna);
			}
			break;
		case 4: exit(1);
		}
		system("pause");
		system("cls");
	}
}