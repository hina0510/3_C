#include<stdio.h>
void main() {
	int arr[5] = { 4,8,2,7,6 };
	int temp;
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 4; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	/*temp = arr[0];
	arr[0] = arr[1];
	arr[1] = arr[0];
	*/
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	
}