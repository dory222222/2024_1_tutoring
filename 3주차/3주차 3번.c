#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//string 함수 선언, 정의는 main 아래에 정의 후 구현
int my_strlen(char* arr1);
int my_strcmp(char* arr1, char* arr2);
void my_strcpy(char* arr1, char* arr2);
void my_strcat(char* arr1, char* arr2);

int main() {
	char arr1[50], arr2[50];
	printf("첫 번째 문자열 :");
	scanf("%s", arr1);
	printf("두 번째 문자열 :");
	scanf("%s", arr2);

	my_strlen(arr1);
	my_strcmp(arr1, arr2);
	if (my_strcmp(arr1, arr2) < 0) {
		printf("첫 번째 문자열이 먼저온다.\n");
	}
	else if (my_strcmp(arr1, arr2)) {
		printf("두 번째 문자열이 먼저온다.\n");
	}
	else {
		printf("두 문자열은 같다\n");
	}
	my_strcat(arr1, arr2); 
	my_strcpy(arr1,arr2);
	return 0;
}
int my_strlen(char* arr1) {
	int i, n = 0;
	for (i = 0; arr1[i] != 0; i++) {
		n += 1;
	}
	printf("문자열의 길이 : %d\n", n);
	
	return 0;
}
int my_strcmp(char* arr1, char* arr2) {
	int i;

	for (i = 0; arr1[i] != 0; i++) {
		if (arr1[i] >= 65 && arr1[i] <= 90) {
			arr1[i] += 32;
		}
		if (arr2[i] >= 65 && arr2[i] <= 90) {
			arr2[i] += 32;
		}
	}
	for (i = 0; i < 100; i++) {
		if (arr1[i] < arr2[i]) {
			return -1;
		}
		else if (arr1[i] > arr2[i]) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

void my_strcpy(char* arr1, char* arr2) {
	int i;
	for (i = 0; i < 100; i++) {
		arr2[i] = arr1[i];
	}
	printf("arr1 : %s   ", arr1);
	printf("arr2 : %s   \n", arr2);

	return;
}

void my_strcat(char* arr1, char* arr2) {
	char sum[200] = { 0 };
	int i, j;
	for (i = 0; arr1[i] != 0; i++) {
		sum[i] = arr1[i];
	}
	sum[i] = 0;
	j = i;
	for (i = 0; i < arr2[i] != 0; i++) {
		sum[j] = arr2[i];
		j++;
	}
	sum[j] = 0;

	printf("합친 문자열 : %s\n", sum);
	return;
}