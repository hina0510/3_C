#include <stdio.h>
char ch[]="�������� �Դϴ�"

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