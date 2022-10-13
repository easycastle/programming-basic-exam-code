#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[100];
    int temp, cnt = 0;

    while (1) {
        scanf("%d", &arr[cnt]);
        if (arr[cnt] == 0) break;
        else cnt++;
    }

    for (int i = 0; i < cnt; i++)
        for (int j = i + 1; j < cnt; j++)
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    for (int i = 0; i < cnt; i++) printf("%d ", arr[i]);

    return 0;
}