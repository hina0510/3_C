#include<stdio.h>
#include<stdlib.h>
struct test{
	int num;
	struct test* link;
};
void main() {
	struct test* p=0;
	int num, data;
	struct test* tmp;
	while (1) {
		printf("1. 데이터 추가\n");
		printf("2. 모든 데이터 확인\n");
		printf("3. 종료\n");
		printf(">>");
		scanf_s("%d", &num);
		if (num == 1) {
			tmp = (struct test*)malloc(sizeof(struct test));
			tmp->link = p;
			p = tmp;
			printf("추가할 데이터 입력 : ");
			scanf_s("%d", &data);
			p->num = data;
		}
		else if (num == 2) {
			tmp = p;
			while (tmp!=0) {
				printf("%d\n", tmp->num);
				tmp = tmp->link;
			}
		}
		else if (num == 3){
			exit(1);
		}
	}
}