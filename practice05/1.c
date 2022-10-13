#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    /*
    * 이런 문제가 딱 직관적이지가 않아서 짜증날수도 있는데
    * 배열의 크기를 어디까지다! 라고 문제가 지정해주질 않음
    * 경북대 온라인 저지 문제가 전부 다 그렇더라구요
    * 그래서 동적할당으로 풀수도 있지만...? 굳이 그러지는 말구
    * 그냥 어림잡아 100, 뭐 불안하면 10000정도까지는 잡아만 두고 풀어야 합니다
    * 그래도 중간고사때는 배열 크기 제한을 문제에서 걸어둘거에요 걱정 맙시다!
    */

    int cnt = 0, sum = 0;
    int arr[100] = { 0, };

    while (1) {
        scanf("%d", &arr[cnt]);
        if (arr[cnt] == 0) break;
        else {
            sum += arr[cnt];
            cnt++;
        }

    }

    printf("%d\n", cnt);

    for (int i = cnt - 1; i >= 0; i--) printf("%d ", arr[i]);

    return 0;
}