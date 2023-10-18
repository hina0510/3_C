#include<stdio.h>
struct test{
	int num;
	struct test* link;
};
void main() {
	struct test a1, a2, a3;
	a1.num = 12345;
	struct test* p;
	a2.link = &a1;
	a3.link = &a2;
	printf("%d\n", a3.link->link->num);
}