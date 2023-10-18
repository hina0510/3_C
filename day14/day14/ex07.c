#include<stdio.h>
int func1(int* abc) {
	func2(&abc);
}
int func2(int** abc) {
	func3(*abc);
}
int func3(int* abc) {
	printf("%d\n", *abc);
}
void main() {
	int abc = 789789;
	func1(&abc);
}