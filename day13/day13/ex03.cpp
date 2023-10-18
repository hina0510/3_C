#include<stdio.h>
void main() {
	int arr[3][4] = {
		{1,2,3,4},
		{10,20,30,40},
		{100,200,300,400}
	};
	printf("%d\n", arr[1][2]);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}