#include <stdio.h>
#include <time.h>
#define ROWS 3
#define COLS 3

int i, j;
// 행렬의 합을 계산하는 함수
void matrixSum(int(*mat1)[COLS], int(*mat2)[COLS], int(*result)[COLS]) {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j]; //result 변수에 두 배열의 값은 인덱스의 합을 저장
     }
    }
}
// 행렬을 출력하는 함수
void printMatrix(int(*mat)[COLS]) {
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d ", mat[i][j]); // 인덱스에 맞게 출력
        }
        printf("\n");
    }
}
int main() {
    int mat1[ROWS][COLS], mat2[ROWS][COLS], result[ROWS][COLS];
    srand(time(0)); //난수생성
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) { //-100 ~ 100의 난수를 배열에 넣어줌
            mat1[i][j] = (rand() % 201) - 100; 
            mat2[i][j] = (rand() % 201) - 100;
        }
   }
   
    matrixSum(mat1, mat2, result);

    printf("두 행렬의 합은 다음과 같습니다:\n");
    printMatrix(result);

    return 0;
}