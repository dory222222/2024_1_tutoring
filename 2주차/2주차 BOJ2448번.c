#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char arr[6144][6144] = { 0 };
char star();
int main() {
    int n;
    scanf("%d", &n);

    star(0,n-1,n);
    for (int i = 0; i < n * 2 - 1; i++) {
        for (int j = 0; j < n * 2 - 1; j++) {
            if (arr[i][j] == '*') {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

char star(int x,int y,int N) {
    if (N == 3) {
        arr[x][y] = '*';
        arr[x + 1][y - 1] = '*';
        arr[x + 1][y + 1] = '*';
        arr[x + 2][y - 2] = '*';
        arr[x + 2][y - 1] = '*';
        arr[x + 2][y] = '*';
        arr[x + 2][y + 1] = '*';
        arr[x + 2][y + 2] = '*';
        return 0;
    }
    else {
        star(x, y, N / 2);
        star(x + N / 2, y - N / 2, N / 2);
        star(x + N / 2, y + N / 2, N / 2);
    }
}