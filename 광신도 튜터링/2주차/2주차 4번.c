#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int find_max_value(int arr[][3], int rows, int cols) {   
    int i,j;
    int max = 0; //배열의 최대값을 받아줄 변수 생성
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) { //행열 길이만큼 반복 + 모든 배열과 비교하기 위해 이중for문 사용
            if (arr[i][j] >= max) {
                max = arr[i][j]; 
            }
        }
    }
    return max; 
}

int main() {
    int arr1[4][3] = { {11, 82, 37}, {46, 55, 46}, {37, 18, 9} ,{4, 64, 58} };
    int result1 = find_max_value(arr1,4,3);
    printf("arr1의 가장 큰 값: %d\n", result1);

    return 0;
}