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
		case 'w':printf("^^^ �̵�\n"); break;
		case 'a':printf("<<< �̵�\n"); break;
		case 's':printf("�Ʒ��� �̵�\n"); break;
		case 'd':printf(">>> �̵�\n"); break;
		}
	}
	*/

}