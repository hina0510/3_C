#include<stdio.h>
/*
void main() {
	printf("test");
	main();
}
*/
int fact(int n) {
	if (n == 1)
		return 1;
	else return(n * fact(n - 1));
}

void main() {
	int x = 5;
	printf("%d!�� ���� %d�̴�\n", x, fact(x));
}