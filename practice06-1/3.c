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
    * �ǿܷ� ����ȯ �Ǽ��� ���� �ؿ�
    * Ư�� �Լ������� ����ȯ �߸��Ѱ� ������ �� Ȯ���ϱ�!!
    */
}