#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[5], b[5];

    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++) scanf("%d", &b[i]);

    if ((a[0] == b[0]) && (a[1] == b[1]) && (a[2] == b[2]) && (a[3] == b[3]) && (a[4] == b[4])) printf("same");
    else printf("not same");
    /*
    * 배열 비교 코드(10~11번 코드)가 좀 더럽죠?
    * 사실 for문으로도 풀 수 있고, while문으로도 풀 수 있어요
    * 풀이법이 굉장히 많으니 시간 되시면 다른 방법으로 코드 한 번 짜보세요!
    */

    return 0;
}