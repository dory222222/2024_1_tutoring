#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#pragma warning (disable : 6031)
int hadamard(int x,int y,int N,int R,int **arr);
int main(void)
{
	int n = 1,input,i,j,r = 1;
	scanf("%d", &input);
	n = n<<input;
	
	int** Hm = (int**)malloc(sizeof(int*) * n);
	for (i = 0; i < n; i++)
	{
		*(Hm + i) = (int*)malloc(sizeof(int) * n);
	}

	hadamard(0, 0, n,r,Hm);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%2d ", Hm[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		free(Hm[i]);
	}
	free(Hm);
	return 0;
}
 int hadamard(int x, int y, int N,int R,int **arr)
{
	 if (N == 0)
	 {
		 arr[x][y] = R;
		 return arr;
	 }
	 else
	 {
		 hadamard(x + N / 2, y + N / 2, N / 2,-R,arr);
		 hadamard(x, y + N / 2, N / 2,R,arr);
		 hadamard(x + N / 2, y, N / 2,R,arr);
		 hadamard(x, y, N / 2,R,arr);
	 }
}