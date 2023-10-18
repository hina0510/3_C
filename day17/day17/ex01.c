#include<stdio.h>
void main() {
	char str[20]="test";
	char arr[20];
	
	sprintf_s(arr, 20, "æ»≥Á«œººø‰ %s", str);
	printf("arr : %s\n", arr);
}
