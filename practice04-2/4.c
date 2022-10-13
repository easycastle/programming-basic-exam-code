#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int c, f, n, cnt = 0;

    scanf("%d", &c);

    f = round((double)9 / 5 * (double)c + 32);

    while (1) {
        cnt++;

        scanf("%d", &n);

        if (n == f) break;
        else if (n < f) printf("small\n");
        else if (n > f) printf("large\n");
    }

    printf("correct %d", cnt);

    return 0;
}