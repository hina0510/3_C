#include<stdio.h>
void main() {
	char str[20]="test";
	char arr[20];
	
	sprintf_s(arr, 20, "�ȳ��ϼ��� %s", str);
	printf("arr : %s\n", arr);
}
