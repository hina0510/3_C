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
	printf("%d!의 값은 %d이다\n", x, fact(x));
}