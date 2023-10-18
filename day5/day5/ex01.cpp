#include<stdio.h>
void main() {
	int kor, eng, math, sum;
	float avg;
	char na[20];
	printf("---- 입력 결과 ----\n");
	printf("이름 : ");
	scanf_s("%s", na, 20);
	printf("국, 영, 수 성적 : ");
	scanf_s("%d%d%d", &kor, &eng, &math);
	sum = kor + eng + math;
	avg = sum / 3.0;
	
	if (avg > 90)printf("A\n");
	else if (avg > 80)printf("B\n");
	else if (avg > 70)printf("C\n");
	else if (avg > 60)printf("D\n");
	else if (avg < 60)printf("F\n");

	printf("---- 출력 결과 ----\n");
	printf("%s 님의 결과\n", na);
	printf("국어 점수 : %d, 영어 점수 : %d, 수학 점수 : %d\n", kor, eng, math);
	printf("합계 : %d, 평균 : %.2f, 등급 : ", sum, avg);
}