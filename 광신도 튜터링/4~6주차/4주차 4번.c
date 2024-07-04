#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <time.h>
#pragma warning (disable : 6031)

int main(void)
{
	srand(time(0));
	int n,i,j,sum = 1; 
	double div = 0;
	scanf("%d", &n);
	double** g = (double**)malloc(sizeof(double*) * n);
	for (i = 0; i < n; i++) {
		*(g + i) = (double*)malloc(sizeof(double) * n);
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%lf", &g[i][j]);
		}
	}
	/*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			g[i][j] = rnad() % 9 - 4;
		}
	}
	*/
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			div = g[j][i] / g[i][i];
			for (int k = 0; k < n; k++) {
				g[j][k] -= g[i][k] * div;
			}
		}
	}
	printf("\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%g ", g[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++) {
		sum *= g[i][i];
	}
	printf("\n");
	printf("%d", sum);

	return 0;
}