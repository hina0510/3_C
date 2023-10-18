#include<stdio.h>
struct test {
	int num;
};
void main() {
	int num;
	num = 100;
	int* p = &num;
	*p = 1234;

	struct test t;
	struct test* pt = &t;
	t.num = 100;
	//(*pt).num = 1234;
	pt->num = 12345;
	printf("t.num : %d\n", t.num);
	printf("(*pt).num : %d\n", (*pt).num);
}