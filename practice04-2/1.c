#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n = 0, sum = 0;
    int cnt = -1;

    scanf("%d", &n);
    cnt += 1;
    sum += n;

    if (n == -1) printf("0");
    /*
    * ��ÿ� ó������ - 1�� ������ 0�� ���;� �ϴµ�
    * �¶��� ������ ������ ���� �̻��ϰ� ����
    * �׷��� �������� �ش� ���̽��� ������ �������װŵ��
    * �׷��� 12�� �ڵ�� ���� �ǹ̴� ���µ� �׳� �־�� �׾��
    * �����Ͻñ� ����
    */ 

    else {
        while (n != -1) {
            scanf("%d", &n);
            cnt += 1;
            sum += n;
        }
        sum++;

        printf("%.2lf\n", (double)sum / cnt);
    }

    return 0;
}