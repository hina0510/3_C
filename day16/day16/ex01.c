#include<stdio.h>
void func(char msg[]) {
	for (int i = 0; msg[i] != NULL; i++) {
		if (i == 0)
			msg[i] = msg[i] - 32;
		while (msg[i] == ' ') {
			i++;
		}
		if (msg[i - 1] == ' ' && msg[i] >= 'a' && msg[i] <= 'z') {
			msg[i] = msg[i] - 32;
		}
	}
}
void main() {
	char msg[] = "test  string  Quiz  a";
	printf("���� �� : %s\n", msg);
	func(msg);
	printf("���� �� : %s", msg);
	
}