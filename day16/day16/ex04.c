#include<stdio.h>
struct member {
	int age;
	char name[20];
};
typedef struct member MEMBER;
void main() {
	int arr[10] = { 10,20,30 };
	arr[0]; arr[1];
	MEMBER mem[3];
	//mem[0].age = 10;
	//mem[1].age = 20;
	//printf("%d %d\n", mem[0].age, mem[1].age);
	for (int i = 0; i < sizeof(mem)/sizeof(MEMBER); i++) {
		printf("나이 입력 : ");
		scanf_s("%d", &mem[i].age);
		printf("\n이름 입력 : ");
		scanf_s("%s", &mem[i].name, 20);
	}
	for (int i = 0; i < sizeof(mem) / sizeof(MEMBER); i++) {
	printf("\n이름 : %s, 나이 : %d", mem[i].name, mem[i].age);
	}
}
