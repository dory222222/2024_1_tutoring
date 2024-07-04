#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <malloc.h>
#pragma warning (disable : 6031)

int main(void)
{
	int row, col,i,j,x = 0,y = 0;
	int sum1 = 0, sum2 = 0;
	srand(time(0));
	printf("세로길이");
	scanf("%d", &row);
	printf("가로길이");
	scanf("%d", &col);
	int** A = (int**)malloc(sizeof(int*) * row);

	for (i = 0; i < row; i++)
	{
		*(A + i) = (int*)malloc(sizeof(int) * col);
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			A[i][j] = rand() % 201 - 100;
		}
	}

	int** AT = (int**)malloc(sizeof(int*) * col); 

	for (i = 0; i < col; i++) 
	{
		*(AT + i) = (int*)malloc(sizeof(int) * row);
	}

	for (i = 0; i < col; i++) 
	{
		for (j = 0; j < row; j++) 
		{
			AT[i][j] = rand() % 201 - 100;
		}
	}
	int** ATA = (int**)malloc(sizeof(int*) * col);
	for (i = 0; i < col; i++)
	{
		*(ATA + i) = (int*)malloc(sizeof(int) * col);
	}
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < col; j++)
		{
			for (x = 0; x < row; x++)
			{
				sum1 += AT[i][x] * A[y][j];
				y++;
			}
			ATA[i][j] = sum1;
			y = 0;
			sum1 = 0;
		}
	}
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%6d ", ATA[i][j]);
		}
		printf("\n");
	}
	free(ATA);
	printf("\n\n");

	int** AAT = (int**)malloc(sizeof(int*) * row);
	for (i = 0; i < row; i++)
	{
		*(AAT + i) = (int*)malloc(sizeof(int) * row);
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			for (x = 0; x < col; x++)
			{
				sum2 += A[i][x] * AT[y][j];
				y++;
			}
			AAT[i][j] = sum2;
			sum2 = 0;
			y = 0;
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			printf("%6d ", AAT[i][j]);
		}
		printf("\n");
	}
	free(AAT);
	free(A);
	free(AT);

	return 0;
}