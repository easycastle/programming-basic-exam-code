#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, k, cnt, temp;
    int sum1 = 0, sum10 = 0, sum100 = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        cnt = 0;

        scanf("%d", &k);
        temp = k;

        while (k != 0) {
            k = k / 10;
            cnt++;
        }

        if (cnt == 1) {
            sum1 += temp;
        }
        else if (cnt == 2) {
            sum10 += temp;
        }
        else if (cnt == 3) {
            sum100 += temp;
        }
    }

    printf("%d %d %d", sum1, sum10, sum100);

    return 0;
}