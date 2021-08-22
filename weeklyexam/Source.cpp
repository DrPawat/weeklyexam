#include<stdio.h>
int main() {
	int x, sum;
	scanf_s("%d", &x);
	for (int a = 0; a < x; a++) {
		for (int b = 1; b <= x + x - 1; b++) {
			if (b<x-a || b>x+a ) {
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}