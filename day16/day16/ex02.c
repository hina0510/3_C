#include<stdio.h>
void func() {
	return;
}
struct userInfo {
	int age;
	char name[20], addr[20];
};
void main() {
	struct userInfo info;
	//info.age = 100;
	//info.name = 'yu';
	//printf("%d\n", info.age);
	//printf("%s\n", info.name);
	printf("���� �Է� : ");
	scanf_s("%d", &info.age);
	printf("\n�̸� �Է� : ");
	scanf_s("%s", &info.name, 20);
	printf("\n�ּ� �Է� : ");
	scanf_s("%s", &info.addr, 20);

	printf("\n���� : %d, �̸� : %s, �ּ� : %s\n", info.age, info.name, info.addr);
	//func(age, name, addr, tel);
}