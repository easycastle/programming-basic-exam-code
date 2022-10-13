#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int cost;
	scanf("%d", &cost);

	int n10000, n5000, n1000, n500, n100, n50, n10, n5, n1;
	// 각각 지폐 혹은 동전의 갯수를 의미

	n10000 = cost / 10000;
	cost %= 10000;

	n5000 = cost / 5000;
	cost %= 5000;

	n1000 = cost / 1000;
	cost %= 1000;

	n500 = cost / 500;
	cost %= 500;

	n100 = cost / 100;
	cost %= 100;

	n50 = cost / 50;
	cost %= 50;

	n10 = cost / 10;
	cost %= 10;

	n5 = cost / 5;
	cost %= 5;

	n1 = cost / 1;

	printf("10000:%d\n", n10000);
	printf("5000:%d\n", n5000);
	printf("1000:%d\n", n1000);
	printf("500:%d\n", n500);
	printf("100:%d\n", n100);
	printf("50:%d\n", n50);
	printf("10:%d\n", n10);
	printf("5:%d\n", n5);
	printf("1:%d\n", n1);

	return 0;
}