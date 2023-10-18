#include<stdio.h>
int b;
void test() {
	static int a = 5;
	printf("a : %d\n", a);
	printf("test b : %d\n", b);
	a += 10;
}
void main() {
	b = 12345;
	test();
	test();
}