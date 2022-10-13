#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getJudgeData();
void calcScore(double d[], int n);
double findLowest(double d[], int n);
double findHighest(double d[], int n);


int main() {
    int n;
    double d[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) d[i] = getJudgeData();

    calcScore(d, n);

    return 0;
}

double getJudgeData() {
    double n;

    scanf("%lf", &n);
    
    while (n < 0 || n > 10) {
        scanf("%lf", &n);
    }

    return n;
}

void calcScore(double d[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++) sum += d[i];

    sum -= findLowest(d, n);
    sum -= findHighest(d, n);

    printf("%.2lf", sum / (n - 2));
}

double findLowest(double d[], int n) {
    double temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (d[j] > d[j + 1]) {
                temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }

    return d[0];
}

double findHighest(double d[], int n) {
    double temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (d[j] > d[j + 1]) {
                temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }

    return d[n - 1];
}