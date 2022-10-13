#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int kineticEnergy(int weight, int velocity);

int main() {
    int weight, velocity;

    scanf("%d %d", &weight, &velocity);

    printf("%d", kineticEnergy(weight, velocity));

    return 0;
}

int kineticEnergy(int weight, int velocity) {
    return (double)1 / 2 * weight * velocity * velocity;
    /*
    * 의외로 형변환 실수를 많이 해요
    * 특히 함수에서는 형변환 잘못한건 없는지 꼭 확인하기!!
    */
}