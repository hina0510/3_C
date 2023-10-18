#include<stdio.h>
int* func(int* n) {
	return n;
}
int** func2(int* p) {
	return &p;
}
void func3(int**p) {}
void main() {
	int num = 100;
	int* p = &num;
	func(&num);
	func2(p);
	int** pp;
	func3(pp);
	
}