#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c);
int middle(int a, int b, int c);
int min(int a, int b, int c);

int main() {
    int a, b, c;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) break;

        printf("%d %d %d\n", max(a, b, c), min(a, b, c), middle(a, b, c));
    }

    return 0;
}

int max(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int min(int a, int b, int c) {
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}

int middle(int a, int b, int c) {
    if (a != max(a, b, c) && a != min(a, b, c)) {
        return a;
    }
    else if (b != max(a, b, c) && b != min(a, b, c)) {
        return b;
    }
    else {
        return c;
    }
}