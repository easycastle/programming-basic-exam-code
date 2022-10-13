#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /*
    * 너무 줄여서 안 예쁘긴 한데
    * 그냥 세 문단(i)을 아홉 열(j)씩 세 행(k)으로 각각 반복했다 보면 됩니다
    * 다중 for문 잘 사용 못하겠으면 이렇게 어느 부분을 반복시킬지 생각하고 나누기!
    */

    for (int i = 0; i < 3; i++) {
        for (int j = 1; j <= 9; j++) {
            for (int k = i * 3 + 1; k <= i * 3 + 3; k++) {
                if (k % 3 == 0) printf("%d*%d=%d", k, j, k * j);
                else printf("%d*%d=%d\t\t", k, j, k * j);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}