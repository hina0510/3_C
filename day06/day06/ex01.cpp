#include<stdio.h>
#include<stdlib.h>
void main() {
	int num = 0, kor = 0, eng = 0, math = 0, sum = 0;
	float avg;
	char name[20] = { };//{ }, { 0 }, "" 다 초기화 가능
	while(1){
		printf("====================\n");
		printf("       menu\n");
		printf("====================\n");
		printf("1. 학생이름 입력\n");
		printf("2. 성적 3과목 입력\n");
		printf("3. 학생이름 출력\n");
		printf("4. 합계 출력\n");
		printf("5. 평균 출력\n");
		printf("6. 종료\n");
		printf("====================\n");
		printf("입력 : ");
		scanf_s("%d", &num);
		sum = kor + eng + math;
		avg = sum / 3.0;
		switch (num)
		{
		case 1:
			printf("학생이름 입력 : ");
			scanf_s("%s", name, 20);
			break;
		case 2:
			printf("성적 세과목 입력 : ");
			scanf_s("%d%d%d", &kor, &eng, &math);
			break;
		case 3:
			printf("학생이름 : %s\n", name);
			break;
		case 4:
			printf("합계 : %d\n", sum);
			break;
		case 5:
			printf("평균 : %.2f\n", avg);
			break;
		case 6:
			exit(1);
		default:
			break;
		}
		system("pause");
		system("cls");
	}
}