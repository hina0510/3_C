#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void main() {
	char str1[10] = "tests";
	char str2[10] = "tests";
	printf("%d\n", str1 == str2);
	printf("%d\n", strcmp(str1, str2));

	int n, n2, ran;
	char ch;
	char st[3][10] = { "test","hello","number" };
	char save[20] = { 0 };
	srand(time(0));
	while (1) {
		printf("1.게임 시작\n");
		printf("2.정답 맞추기\n");
		printf("3.지금까지 맞춘 숫자\n");
		printf(">>> : ");
		scanf_s("%d", &n);
		char userInput[20];
		switch (n) {
		case 3:
			printf("%s\n", save);
			break;
		case 2:
			printf("정답 입력 : ");
			scanf_s("%s", userInput, 20);
			if (strcmp(userInput, st[ran]) == 0) {
				printf("정답입니다\n");
			}
			else {
				printf("틀렸습니다\n");
			}
			break;
		case 1:
			printf("1.게임 계속 2.새로 시작 >> : ");
			scanf_s("%d", &n2);
			if (n2 == 2) {
				ran = rand() % 3;
				for (int i = 0; i < strlen(save); i++) {

				}
			}
			
			printf("%s\n", st[ran]);
			//printf("%d\n", strlen(st[ran]));
			for (int i = 0; i < strlen(st[ran]); i++) {
				printf("* ");
			}
			printf("\n");
			printf("입력 : ");
			getchar();
			scanf_s("%c", &ch, 1);
			printf("사용자 입력값 : %c\n", ch);
			for (int i = 0; i < strlen(st[ran]); i++) {
				if (st[ran][i] == ch) {
					printf("%c", ch);
				}
				else {
					printf("* ");
				}
			}
			printf("\n");
			break;
		}
	}
}