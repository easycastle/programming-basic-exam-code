#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /*
    * �ʹ� �ٿ��� �� ���ڱ� �ѵ�
    * �׳� �� ����(i)�� ��ȩ ��(j)�� �� ��(k)���� ���� �ݺ��ߴ� ���� �˴ϴ�
    * ���� for�� �� ��� ���ϰ����� �̷��� ��� �κ��� �ݺ���ų�� �����ϰ� ������!
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