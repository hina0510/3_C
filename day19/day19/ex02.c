#include<stdio.h>
#include<malloc.h>
void main() {
	int num;
	printf("�̸��� ����ڿ���?");
	scanf_s("%d", &num);
	char* name = (char*)malloc(num + 1);
	printf("�̸��� ������?");
	scanf_s("%s", name, num+1);
	printf("����� �̸��� %s �̱���\n", name);

	free(name);
}
