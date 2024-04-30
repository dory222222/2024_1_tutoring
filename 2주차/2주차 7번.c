#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int swap_values(int *n1,int*n2) {
    int swap = 0;
    swap = *n1;
    *n1 = *n2;
    *n2 = swap;
    return 0;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    printf("교환 이전: num1 = %d, num2 = %d\n", num1, num2);

    swap_values(&num1,&num2); 

    printf("교환 이후: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}