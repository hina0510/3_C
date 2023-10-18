#include<stdio.h>
typedef struct test_hello {
	int num;
	float fl;
} HELLO; //NULL
void main() {
	struct test_hello n1;
	n1.num = 1000;
	n1.fl = 1.123;
	HELLO h;
	h.num = 500;
	h.fl = 5.5;
	printf("n1 : %d, %.2f\n", n1.num, n1.fl);
	printf("h : %d, %.2f\n", h.num, h.fl);
}