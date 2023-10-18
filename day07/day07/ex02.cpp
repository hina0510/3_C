#include<stdio.h>
#include<conio.h>
#define ESC 27
void main() {
	char ch;
	//while ((ch = _getch()) != ESC) {
	for(; (ch = _getch()) != ESC;){
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
		if (ch == 'Q')
			break;
		printf("%c\n", ch);
	}
	/*
	while (1) {
		//scanf_s("%c", &ch, 1);
		ch = _getch();
		switch (ch) {
		case 'w':printf("^^^ 이동\n"); break;
		case 'a':printf("<<< 이동\n"); break;
		case 's':printf("아래로 이동\n"); break;
		case 'd':printf(">>> 이동\n"); break;
		}
	}
	*/

}