#include<stdio.h>
void main() {
	int score[5] = { 82,85,76,79,96 };
	int rank[5] =  { 1, 1, 1, 1, 1 };
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 5; j++) {
			if (score[i] >= score[j]) {
				sum++;
			}
		}
		sum = 5 - sum+1;
		rank[i] = sum;
		printf("%d ", score[i]);
		printf("%d\n", rank[i]);
	}

}