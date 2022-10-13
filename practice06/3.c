#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int x) {
    int isPrime = 1;

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            isPrime = 0;
            break;
        }
    }

    return isPrime;
}

void main()
{
    int x;
    scanf("%d", &x);
    printf("%s", isPrime(x) ? "prime" : "not prime");
}