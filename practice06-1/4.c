#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int checkLastDigit(int arr[], int size, int num);

int main() {
    int arr[100], size;

    scanf("%d", &size);

    for (int i = 0; i < size; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < 10; i++) printf("%d %d\n", i, checkLastDigit(arr, size, i));

    return 0;
}

int checkLastDigit(int arr[], int size, int num) {
    int res = 0;

    for (int i = 0; i < size; i++) if (arr[i] % 10 == num) res++;

    return res;
}