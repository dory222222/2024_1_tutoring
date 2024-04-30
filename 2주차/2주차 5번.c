#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols;

    printf("배열의 행(row)과 열(col)을 입력하세요 (1부터 100까지의 정수): ");
    scanf("%d %d", &rows, &cols);

    printf("배열의 값을 입력하세요:\n");

    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]); //입력받은 행렬의 크기만큼 그 값을 넣어줌
        }
    }

    printf("\n입력한 배열:\n");
    printf("{");
    for (int i = 0; i < rows; i++) { //
        for (int j = 0; j < cols; j++) { //행렬을 위치에 맞게 맛있게 출력
            if (j == 0) {
                printf("{");
            }
           
            printf("%d ", arr[i][j]);
            if (j != cols - 1) {
                printf(", ");
            }
            if (j == cols - 1) {
                printf("}");
            }
        }
        if (i != rows - 1) {
            printf("\n");
        }
    }
    printf("}");
    

    return 0;
}