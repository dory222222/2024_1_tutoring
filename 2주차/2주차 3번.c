#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMinMax(int a[],int *N, int *X, int s) { //포인터로 max,min의 주소값을 호출
    int i,j,change = 0; 
    for (j = 0; j < s - 1; j++) {
        for (i = 0; i < s - 1; i++) { //버블정렬로 배열을 오름차순으로 정렬
            if (a[i] > a[i + 1]) {
                change = a[i];
                a[i] = a[i + 1];
                a[i + 1] = change;
            }
        }
    }
    *N = a[0]; //가장 작은 값의 주소를 받음
    *X = a[s - 1]; //가장 큰 값의 주소를 받음
   return 0;
}

int main() {
    int size, min = 0, max = 0; 
    printf("배열 크기 입력: ");
    scanf("%d", &size);

    int arr[100];
    printf("정수 배열 입력: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findMinMax(arr,&min,&max,size); 

    printf("최소값: %d\n", min);
    printf("최대값: %d\n", max);

    return 0;
}