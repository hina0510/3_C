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
	printf("나이 입력 : ");
	scanf_s("%d", &info.age);
	printf("\n이름 입력 : ");
	scanf_s("%s", &info.name, 20);
	printf("\n주소 입력 : ");
	scanf_s("%s", &info.addr, 20);

	printf("\n나이 : %d, 이름 : %s, 주소 : %s\n", info.age, info.name, info.addr);
	//func(age, name, addr, tel);
}