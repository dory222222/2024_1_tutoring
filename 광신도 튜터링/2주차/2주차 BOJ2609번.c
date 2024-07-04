#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    gcd(a,b);
    printf("%d\n",gcd(a,b)); 
    printf("%d", a * b / gcd(a, b));
    return 0;
}

int gcd(int a1, int b1) {
    if (a1 % b1 == 0) {
        return b1;
    }
    else {
        return gcd(b1,a1 % b1);
    }
}