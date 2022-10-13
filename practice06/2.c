#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printStar(int n);

int main() {
    int n;

    scanf("%d", &n);

    printStar(n);

    return 0;
}

void printStar(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) printf(" ");
        for (int k = 0; k < i * 2 + 1; k++) printf("*");
        printf("\n");
    }
}