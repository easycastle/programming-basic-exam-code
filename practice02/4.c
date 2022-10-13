#include <stdio.h>

int main() {
	int cost = 37970;

	int n10000, n5000, n1000, n100, n10;
	// 각각 지폐 혹은 동전의 갯수를 의미

	n10000 = cost / 10000;
	cost %= 10000;

	n5000 = cost / 5000;
	cost %= 5000;

	n1000 = cost / 1000;
	cost %= 1000;

	n100 = cost / 100;
	cost %= 100;

	n10 = cost / 10;

	printf("37970원은\n");
	printf("만원짜리 %d개\n", n10000);
	printf("오천원짜리 %d개\n", n5000);
	printf("천원짜리 %d개\n", n1000);
	printf("백원짜리 %d개\n", n100);
	printf("십원짜리 %d개로 구성됩니다.", n10);

	return 0;
}