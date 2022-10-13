#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y);
int lcm(int x, int y);

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d", lcm(x, y));

    return 0;
}

int gcd(int x, int y) {
    int gcd;

    for (int i = 1; i <= (x > y ? y : x); i++) if (x % i == 0 && y % i == 0) gcd = i;

    return gcd;
}

int lcm(int x, int y) {
    return x * y / gcd(x, y);
}