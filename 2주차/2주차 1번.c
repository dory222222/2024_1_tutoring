#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int addStrings(char st1[100], char st2[100], char r[200]) {
    int i, j;
    for (i = 0; st1[i] != 0; i++) { //문자열 배열이 0이 될때까지 반복문을 돌림
        r[i] = st1[i]; //처음 입력받은 값을 0부터 차례대로 옮겨받음
    }
    r[i] = ' '; //공백출력
    j = i;
    for (i = 0; st2[i] != 0; i++) { //문자열 배열이 0이 될때까지 반복문을 돌림
        r[j + 1] = st2[i];  //문자열 배열 r이 입력받지 못한 부분부터 옮겨받음
        j++;
    }
    r[j + 1] = 0; //왜 인지 모르겠는데 0을 안넣어주면 이상한게 출력됨 ㅜ
    return 0;
}

int main() {
    char str1[100], str2[100], result[200];
    printf("첫 번째 문자열 입력: ");
    scanf("%s", str1);

    printf("두 번째 문자열 입력: ");
    scanf("%s", str2);

    addStrings(str1, str2, result);

    printf("결과 문자열: %s\n", result);

    return 0;
}