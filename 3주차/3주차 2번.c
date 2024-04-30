#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {
			char number[50] = { 0 };

        printf("정수 하나를 입력하세요: ");
        scanf("%d", &number); // 정수 입력 받기

        printf("입력한 정수는: %d\n", number);

        if (number == 0) {
            break;
        }
    }

    return 0;
}
모르겠어요..............