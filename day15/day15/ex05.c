#include<stdio.h>
void main() {
	int num = 65;
	printf("%f\n", (float)num);

	float* fl = (float*)&num;
	//float* d = fl;
	char str[] = "Test";
	printf(str);
	printf((char*)&num);

}