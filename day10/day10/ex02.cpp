#include<stdio.h>
int bFunc(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int hFunc(int c) {
	if (c % 2 == 0)
		return printf("¦��\n");
	else
		return printf("Ȧ��\n");
}

int saFunc(int d) {
	if (d % 3 == 0)
		return printf("%d�� 3�� ���", d);
}

int soFunc(int e) {
	int sum = 0;
	for (int i = 1; i <= e; i++)
		if (e % i == 0)
			sum++;
	if ( sum == 2 )
		return printf("�Ҽ���");
	else
		return printf("�Ҽ��� �ƴϴ�");
}

int julFunc(int f) {
	if (f < 0)
		return -f;
	else return f;
}

int reFunc(int g) {
	int h, i, j, sum;
	h = g / 100;
	i = g / 10 % 10;
	j = g % 10;
	sum = j * 100 + i * 10 + h;
	return sum;
}

void main() {
	int num1, num2, num3, num4, num5, num6, num7, big, hol, sam, so, jul, re;
	printf("�� �� �Է� : ");
	scanf_s("%d%d", &num1, &num2);
	big = bFunc(num1, num2);
	printf("ū ��  : %d\n", big);

	printf("�� �Է� : ");
	scanf_s("%d", &num3);
	hol = hFunc(num3);

	printf("�� �Է� : ");
	scanf_s("%d", &num4);
	sam = saFunc(num4);

	printf("�� �Է� : ");
	scanf_s("%d", &num5);
	so = soFunc(num5);

	printf("�� �Է� : ");
	scanf_s("%d", &num6);
	jul = julFunc(num6);
	printf("��  : %d\n", jul);

	printf("���ڸ� �� �Է� : ");
	scanf_s("%d", &num7);
	re = reFunc(num7);
	printf("��  : %d\n", re);
}