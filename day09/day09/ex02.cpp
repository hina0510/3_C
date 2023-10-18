#include <stdio.h>
char ch[]="전역변수 입니다"

void main() {
	printf("main ch : %s\n", ch);
	test();
	test2();

	int num = 100;
	if (1) {
		int a = 12345;
		printf("if num : %d", num);
		printf("if a : %d", a);
	}
	printf("main num : %d", num);
	printf("main a : %d", a);
}