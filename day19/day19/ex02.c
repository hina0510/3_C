#include<stdio.h>
#include<malloc.h>
void main() {
	int num;
	printf("이름이 몇글자예요?");
	scanf_s("%d", &num);
	char* name = (char*)malloc(num + 1);
	printf("이름이 뭐예요?");
	scanf_s("%s", name, num+1);
	printf("당신의 이름은 %s 이군요\n", name);

	free(name);
}
