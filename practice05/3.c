#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[5], b[5];

    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++) scanf("%d", &b[i]);

    if ((a[0] == b[0]) && (a[1] == b[1]) && (a[2] == b[2]) && (a[3] == b[3]) && (a[4] == b[4])) printf("same");
    else printf("not same");
    /*
    * �迭 �� �ڵ�(10~11�� �ڵ�)�� �� ������?
    * ��� for�����ε� Ǯ �� �ְ�, while�����ε� Ǯ �� �־��
    * Ǯ�̹��� ������ ������ �ð� �ǽø� �ٸ� ������� �ڵ� �� �� ¥������!
    */

    return 0;
}