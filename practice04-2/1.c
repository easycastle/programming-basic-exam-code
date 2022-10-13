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
    * 당시에 처음부터 - 1을 넣으면 0이 나와야 하는데
    * 온라인 저지의 문제로 값이 이상하게 나옴
    * 그래서 교수님이 해당 케이스를 완전히 삭제시켰거든요
    * 그래서 12번 코드는 딱히 의미는 없는데 그냥 넣어는 뒀어요
    * 참고하시길 ㅎㅎ
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