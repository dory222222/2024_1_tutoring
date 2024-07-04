#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int gcd(int,int);
int main() {
    int a, b,c,d,p,q; //p 분자 q 분모
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d); 
    p = a * d + b * c;
    q = b * d;
    gcd(p,q);
    printf("%d %d", p / gcd(p,q), q / gcd(p,q));
    return 0;
}
int gcd(int p1, int q1) {
    if (p1 % q1 == 0) {
        return q1;
    }
    else {
        return gcd(q1, p1 % q1);
    }
}