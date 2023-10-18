#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#define MAX_LEN 100

typedef struct member {
	char stNum[20], name[20];
	int age, use;
}MEMBER;

void memberRegister(MEMBER* mem);
void login(MEMBER* mem);
void memberRegister(MEMBER* mem);
void memberView(MEMBER* mem);
void membersView(MEMBER* mem);
void memberModify(MEMBER* mem);
void memberDelete(mem);

typedef struct login {
	char stNum[20], name[20];
}LOGIN;

void main() {
	int num;
	char stNum[20];
	char content[10][30] = {
		"로그인 & 회원 가입", "특정 회원 보기", "전체 회원 보기", "특정 회원 수정", "특정 회원 삭제", "종료"
	};
	int size = 6;
	struct member n1;
	MEMBER mem[MAX_LEN] = { 0 };

	while (1) {
		for (int k = 0; strlen(content[k]) != 0; k++) {
			printf("%d, %s\n", k + 1, content[k]);
		}
		printf("> ");
		scanf_s("%d", &num);

		switch (num) {
		case 1:
			login(mem);
			break;
		case 2:
			memberView(mem);
			break;
		case 3:
			membersView(mem);
			break;
		case 4:
			memberModify(mem);
			break;
		case 5:
			memberDelete(mem);
			break;
		case 6:
			exit(1);
			break;
		}
		system("pause");
		system("cls");

	}

}

void login(MEMBER* mem) {
	int num;
	char stNum[20], name[20];
	while (1) {
		printf("1. 로그인");
		printf("2. 회원가입");
		printf("> ");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			printf("인증할 학번 : ");
			scanf_s("%s", stNum, 20);
			printf("인증할 이름 : ");
			scanf_s("%s", name, 20);
			for (int i = 0; i < MAX_LEN; i++) {
				if (mem[i].use && !strcmp(mem[i].stNum, stNum) && !strcmp(mem[i].name, name)) {
					printf("인증되었습니다\n");
					return;
				}
			}
			break;
		case 2:
			memberRegister(mem); 
			break;
		}
	}
}

void memberRegister(MEMBER* mem) {
	for (int i = 0; i < MAX_LEN; i++) {
		if (mem[i].use) {
			printf("\n이름 입력 : ");
			scanf_s("%s", mem[i].name, 20);
			printf("\n학번 입력 : ");
			scanf_s("%s", mem[i].stNum, 20);
			printf("\n나이 입력 : ");
			scanf_s("%d", &mem[i].age);
			mem[i].use = 1;
			printf("회원가입");
			break;
		}
	}
}

void memberView(MEMBER* mem) {
	char stNum[20];
	printf("회원번호 입력 : ");
	scanf_s("%s", &stNum, 20);
	for (int i = 0; i < MAX_LEN; i++) {
		if (mem[i].use && !strcmp(mem[i].stNum, stNum)) {
			printf("\n회원번호 : %s, 회원이름 : %s, 나이 : %d\n", mem[i].stNum, mem[i].name, mem[i].age);
			break;
		}
	}
}

void membersView(MEMBER* mem) {
	for (int i = 0; i < MAX_LEN; i++) {
		if (mem[i].use) {
			printf("\n회원번호 : %s, 회원이름 : %s, 나이 : %d\n", mem[i].stNum, mem[i].name, mem[i].age);
		}
	}
}
void memberModify(MEMBER* mem) {
	char stNum[20], name[20];
	int age=0;
	printf("회원번호 입력 : ");
	scanf_s("%s", &stNum, 20);
	for (int i = 0; i < MAX_LEN; i++) {
		if (mem[i].use && !strcmp(mem[i].stNum, stNum)) {
			printf("\n회원이름 : ");
			scanf_s("%s", mem[i].name, 20);
			printf("\n나이 : ");
			scanf_s("%d", &mem[i].age);
			printf("\n이름 : %s -> %s", mem[i].name, name);
			printf("\n나이 : %d -> %d", mem[i].age, age);
		}
	}
}

void memberDelete(MEMBER* mem) {
	char stNum[20];
	printf("회원번호 입력 : ");
	scanf_s("%s", &stNum, 20);
	for (int i = 0; i < MAX_LEN; i++) {
		if (mem[i].use && !strcmp(mem[i].stNum, stNum)) {
			mem[i].use = 0;
			printf("%s님은 삭제되었습니다\n", stNum);
			break;
		}
	}
}
