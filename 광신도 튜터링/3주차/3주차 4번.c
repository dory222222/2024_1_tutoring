#include <stdio.h>
#include <time.h>
// 행렬의 크기를 상수로 정의
#define ROWS 3
#define COLS 3
// 행렬식을 계산하는 함수
int determinant(int(*mat1)[COLS]) {
    int result;
    result = mat1[0][0] * (mat1[1][1] * mat1[2][2] - mat1[1][2] * mat1[2][1]) - mat1[0][1] * (mat1[1][0] * mat1[2][2] - mat1[1][2] * mat1[0][2]) + mat1[0][2] * (mat1[1][0] * mat1[1][2] - mat1[1][1] * mat1[2][0]);
     return result;
}
int main() {
    int mat1[ROWS][COLS];
    srand(time(0));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat1[i][j] = (rand() % 201) - 100;
        }
    }

    printf("행렬식은 다음과 같습니다:\n");
    printf("행렬식: %d", determinant(mat1));
    return 0;
}