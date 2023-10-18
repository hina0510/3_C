#include<stdio.h>
void main() {
	int kor, eng, math, avg;
	printf("3과목 점수 : ");
	scanf_s("%d%d%d", &kor, &eng, &math);
	avg = (kor + eng + math) / 3;
	if (avg < 70) {
		printf("불합격");
	}
	else if (kor < 60) {
		printf("국어 불합격");
	}
	else if (eng < 60) {
		printf("영어 불합격");
	}
	else if (math < 60) {
		printf("수학 불합격");
	}
	else printf("합격");
}