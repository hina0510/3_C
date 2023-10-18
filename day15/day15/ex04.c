#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(int argc, char* argv[]) {
	//void main(); int main();
	printf("argc : %d\n", argc);
	printf("argv : %s\n", argv[0]);
	//printf("argv : %s\n", argv[1]);
	//printf("argv : %s\n", argv[2]);

	if (strcmp(argv[1], "-c") == 0) {
		system("calc");
	}
	else if (strcmp(argv[1], "-n") == 0) {
		system("notepad");
	}
	else {
		printf("해당 옵션은 존재하지 않습니다\n");
		printf("[option-c, -n]만 사용가능합니다\n");
	}

	return 0;	//0 : 정상, 1 : 비정상, -1 : 악성
}