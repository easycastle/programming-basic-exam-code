#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int cnt = 0;
    double sum = 0;
    double arr[100] = { 0, };

    while (1) {
        scanf("%lf", &arr[cnt]);
        if (arr[cnt] == 0) break;
        else {
            sum += arr[cnt];
            cnt++;
        }
    }

    double avg = sum / cnt;
    printf("%.1lf\n", avg);

    for (int i = 0; i < cnt; i++) if (arr[i] < avg) printf("%.1lf ", arr[i]);
    /*
    * ������ for���� ����� ������ �� ��Ǽ��� �־��
    * ��� ���� �׷��ŵ�� �����S
    * while������ �ؼ� ��հ� �̻��� ���´� �ϸ� break �Ŵ� �ڵ尡
    * ���� �� ���ü��� �����̴ϴ�
    * �ð� �ǽô� ���� �׷� Ǯ�̷ε� �غ��ô°� ���� ��õ�����
    */

    return 0;
}