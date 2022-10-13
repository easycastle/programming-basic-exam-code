#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char scoreToGrade(int score);

int main() {
    int score;

    while (1) {
        scanf("%d", &score);

        if (score == -1) break;

        printf("%c\n", scoreToGrade(score));
    }

    return 0;
}

char scoreToGrade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}