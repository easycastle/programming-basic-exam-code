#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", gcd(a, b));

    return 0;
}

int gcd(int a, int b) {
    int result = 0;

    for (int i = 1; a <= i && b <= i; i++) if (a % i == 0 && b % i == 0) result = i;

    return result;
}