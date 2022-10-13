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
    * 마지막 for문이 깔끔한 느낌이 안 드실수도 있어요
    * 사실 제가 그렇거든요 흐허헣
    * while문으로 해서 평균값 이상이 나온다 하면 break 거는 코드가
    * 조금 더 가시성이 있을겁니다
    * 시간 되시는 분은 그런 풀이로도 해보시는걸 적극 추천드려요
    */

    return 0;
}