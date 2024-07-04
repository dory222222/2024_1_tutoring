#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int a[20];
int main(void) {
	int i,tmp;
	srand(time(0));
	for (i = 0; i < 20; i++) {
		a[i] = rand() % 100; 
		printf("%d ", a[i]);
	}
	printf("\n");

	for (i = 0; i < 20; i++) {
		for (int j = i + 1; j < 20; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp; 
			}
		}
	}
	printf(" 오름차순 : ");
	for (i = 0; i < 20; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("내림차순 : ");
	for (i = 19; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	return 0;
}