#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#pragma warning(disable : 6031)

int main(void) 
{	
	while (1) 
	{
		int i,n,number;
		printf("길이를 입력하세요 : ");
		scanf("%d", &n);
		char* input = (char*)malloc(sizeof(char) * (n+1));
		printf("정수 하나를 입력하세요 : ");
		for (i = 0; i < (n+1); i++) 
		{
			scanf("%c", &input[i]);
		}

		sscanf(input, "%d", &number);
		if (number == 0) 
			{
				break;
			}
		printf("입력한 정수는 : %d\n",number);
		free(input);
	}
	return 0;
}