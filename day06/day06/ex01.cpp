#include<stdio.h>
#include<stdlib.h>
void main() {
	int num = 0, kor = 0, eng = 0, math = 0, sum = 0;
	float avg;
	char name[20] = { };//{ }, { 0 }, "" �� �ʱ�ȭ ����
	while(1){
		printf("====================\n");
		printf("       menu\n");
		printf("====================\n");
		printf("1. �л��̸� �Է�\n");
		printf("2. ���� 3���� �Է�\n");
		printf("3. �л��̸� ���\n");
		printf("4. �հ� ���\n");
		printf("5. ��� ���\n");
		printf("6. ����\n");
		printf("====================\n");
		printf("�Է� : ");
		scanf_s("%d", &num);
		sum = kor + eng + math;
		avg = sum / 3.0;
		switch (num)
		{
		case 1:
			printf("�л��̸� �Է� : ");
			scanf_s("%s", name, 20);
			break;
		case 2:
			printf("���� ������ �Է� : ");
			scanf_s("%d%d%d", &kor, &eng, &math);
			break;
		case 3:
			printf("�л��̸� : %s\n", name);
			break;
		case 4:
			printf("�հ� : %d\n", sum);
			break;
		case 5:
			printf("��� : %.2f\n", avg);
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