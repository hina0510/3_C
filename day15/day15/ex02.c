#include<stdio.h>
void main() {
	char ch02;
	ch02 = getchar();
	printf("���� : %c\n", ch02);

	char str[10];
	printf("�Է� : ");
	scanf_s("%[^\n]", str, 10);
	//������ ������ �ִ� ��� ���� arr �Է� ���� �������� �ĸ� ���� ���

	char arr[10];
	printf("�Է� : ");
	getchar();
	scanf_s("%[^\n]", arr, 10);
	//������ ������ �ִ� ��� ���� ���ڰ� ������ ����

	printf("��� : %s\n", str);
	printf("��� : %s\n", arr);

}