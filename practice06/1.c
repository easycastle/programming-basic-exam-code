#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b);

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", gcd(a, b));

    return 0;
}

int gcd(int a, int b) {
    int gcd;

    for (int i = 1; i <= (a > b ? b : a); i++) if (a % i == 0 && b % i == 0) gcd = i;

    return gcd;
}