#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* sumMultiple(int start, int end, int n, int m) {
    static int answer[6];

    for (int i = start; i < end; i++) {
        if (i % n == 0) {
            answer[0] += i;
        }
        if (i % m == 0) {
            answer[1] += i;
        }
        if (i % n == 0 && i % m == 0) {
            answer[2] += i;
        }
        if (i % n != 0 && i % m == 0) {
            answer[4] += i;
        }
        answer[5] += i;
    }

    answer[3] = answer[0] + answer[1] - answer[2];
    answer[5] -= answer[3];

    return answer;
}

int main() {
    int start, end, n, m;

    scanf("%d %d %d %d", &start, &end, &n, &m);

    int* answer = sumMultiple(start, end, n, m);

    for (int i = 0; i < 6; i++) printf("%d\n", answer[i]);

    return 0;
}