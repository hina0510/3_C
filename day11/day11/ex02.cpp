#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gameFunc() {
	int num1=0, score=0, com=rand();
	//printf("=== �� & �ٿ� ���� ===\n");
	srand(time(0));
	com = com % 99 + 1;
	while (1) {
		printf(">");
		scanf_s("%d", &num1);
		system("pause");
		system("cls");
		if (com > num1) {
			printf("=== UP ===\n");
			score++;
		}
		else if (com < num1) {
			printf("=== DOWN ===\n");
			score++;
		}
		else {
			score++;
			printf("%d ȸ���� �����ϼ̽��ϴ�\n", score);
			break;
		}
			
	}
	return score;
}

int scoFunc(int a) {
	int sco=99;
	if (a < sco) {
		sco = a;
	}
	if (sco == 99) {
		printf("������ �������ּ���\n");
	}
	else
		printf("�ְ������� %dȸ �Դϴ�\n", sco);
	return sco;
}

void main() {
	int num, game=99, score=99;
	
	while (1) {
		printf("=== �� & �ٿ� ���� ===\n");
		printf("1. ���ӽ���\n");
		printf("2. ��������\n");
		printf("3. ���ӳ�����\n");
		printf(">");
		scanf_s("%d", &num);
		
		switch (num)
		{
		case 1:
			printf("=== UP&DOWN ===\n");
			game = gameFunc();
			break;
		case 2:
			score = scoFunc(game);
			break;
		case 3:
			exit(1);
		}
		system("pause");
		system("cls");
	}
}

