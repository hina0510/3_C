#include<stdio.h>
void main() {
	/*
	int arr[] = {10,17,3,9,27,10,8,9,13,21};
	int invert_arr[10];
	int j = 10;
	for (int i = 0; i < 10; i++) {
		j--;
		invert_arr[i] = arr[j];
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", invert_arr[i]);
	}
	
	int sum1=0, sum2=0;
	int arr[] = { 10,17,3,9,27,10,8,9,13,21 };
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			sum1 += arr[i];
		}
		else {
			sum2 += arr[i];
		}
	}
	printf("Â¦¼ö ÇÕ : %d, È¦¼ö ÇÕ : %d", sum1, sum2);
	*/

	int sum1 = 0, sum2 = 0, max, min, j=0,k=0;
	int arr[] = { 20,17,3,9,27,10,8,9,13,21 };
	int odd_arr[6] = { '\0' };
	int even_arr[6] = { '\0' };
	int sub_arr[6] = { '\0' };
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			even_arr[j] = arr[i];
			j++;
		}
		else {
			odd_arr[k] = arr[i];
			k++;
		}
		
	}
	for (int i = 0; i < 5; i++) {
		sub_arr[i] = even_arr[i] - odd_arr[i];
		printf("%d ", sub_arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", even_arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ", odd_arr[i]);
	}
}