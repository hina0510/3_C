#include<stdio.h>
struct test{
	int num1;
	char str[20];
	int num2;
};
struct test input(struct test a) {
	a.num1 = 100;
	a.num2 = 200;
	return a;
}
int op(struct test b) {
	int sum = b.num1 + b.num2;
	return sum;
}

void print(int s, struct test t) {
	printf("%d + %d = %d\n", t.num1, t.num2, s);
}
void main() {
	struct test t = { 10,"aaa", 20 };
	printf("%d %d %s\n", t.num1, t.num2, t.str);
	t = input(t);
	int s = op(t);
	print(s, t);
}