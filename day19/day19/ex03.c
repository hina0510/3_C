#include<stdio.h>
#include<malloc.h>
char* func() {
	//char name[20];
	char* name = (char*)malloc(20);
	strcpy_s(name, 20, "12345");
	printf("func : %s\n", name);
	return name;
}
void main() {
	char* name;
	name = func();
	printf("�̸� : %s\n", name);
	free(name);
	printf("�̸� : %s\n", name);
}