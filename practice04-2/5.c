#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    int a, b;
    char c;

    while (1) {
        scanf("%d%c%d", &a, &c, &b);

        if (c == '!') break;
        else if (c == '+') printf("%d+%d=%d\n", a, b, a + b);
        else if (c == '-') printf("%d-%d=%d\n", a, b, a - b);
        else if (c == '*') printf("%d*%d=%d\n", a, b, a * b);
        else if (c == '/') {
            if (b == 0) printf("Error\n");
            else printf("%d/%d=%.2f\n", a, b, (double)a / b);
        }
    }
}