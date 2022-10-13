#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    while (n < 0)
    {
        printf("wrong\n");
        scanf("%d", &n);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", (int)pow(2, i));
        sum += pow(2, i);
    }

    printf("=%d", sum);

    return 0;
}