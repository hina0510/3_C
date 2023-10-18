#include<stdio.h>
int func(int** num1, int** num2) {
	int* temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void main() {
	int n1 = 100, n2 = 200;
	int* num1=&n1, * num2=&n2;
	printf("변경전 : %d, %d\n", n1, n2);
	func(&num1, &num2);
	printf("변경후 : %d, %d\n", *num1, *num2);

}