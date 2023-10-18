#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gameFunc() {
	int num1=0, score=0, com=rand();
	//printf("=== 업 & 다운 게임 ===\n");
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
			printf("%d 회만에 성공하셨습니다\n", score);
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
		printf("게임을 시작해주세요\n");
	}
	else
		printf("최고점수는 %d회 입니다\n", sco);
	return sco;
}

void main() {
	int num, game=99, score=99;
	
	while (1) {
		printf("=== 업 & 다운 게임 ===\n");
		printf("1. 게임시작\n");
		printf("2. 게임전적\n");
		printf("3. 게임끝내기\n");
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

