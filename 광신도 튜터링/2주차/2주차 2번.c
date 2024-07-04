#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int ffib[100],int k) {
    int i;
    ffib[0] = 1;
    ffib[1] = 1; //피보나치에 1,2항은 모두 1이므로 1을 넣어줌
    for (i = 0; i < k - 2; i++) { //피보나치 배열을 입력한 n까지 반복문을 돌림
        ffib[i + 2] = ffib[i + 1] + ffib[i]; //피보나치의 원리를 이용
    }
    return 0;
}

int main() {
    int n;
    printf("피보나치 수열 길이 입력: ");
    scanf("%d", &n);

    int fib[100];
    fibonacci(fib,n);  

    printf("피보나치 수열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}