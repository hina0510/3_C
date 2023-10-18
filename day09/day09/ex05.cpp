#include<stdio.h>
/*
void test2();
void test() {
	printf("test\n");
}

void main() {
	printf("main\n");
	test(); test2();
}
void test2() {
	printf("test2\n");
}
*/
void test(int a, int b);
void test2() {
	test(10, 20);
}
void test(int a, int b) {
	printf("%d, %d\n", a, b);
}

void main() {
	test2();
}

