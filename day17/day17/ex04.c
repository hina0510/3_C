#include<stdio.h>

typedef struct test{
	int num1;
	char msg[20];
}TEST;
void func(TEST *t) {
	(*t).num1 = 1234;
	strcpy_s(t->msg, 20, "�ȳ��ϼ���");
	printf("����!");
}
void main() {
	TEST t = {0};
	func(&t);
	printf("main : %d %s\n", t.num1, t.msg);
}