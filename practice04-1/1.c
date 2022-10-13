#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {
	int a, b, k, n;

	scanf("%d %d %d", &a, &b, &k);
	printf("0.");

	for (int i = 0; i < k; i++) {
		a *= 10;
		n = a / b;
		printf("%d", n);
		a %= b;
	}

	return 0;
}