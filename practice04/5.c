#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, sum = 0;
	double tax[4] = { 0.09, 0.18, 0.27, 0.36 };
	int remain[4] = { 1000, 3000, 4000, 0 };

	scanf("%d", &n);

	remain[3] = n - 8000;

	for (int i = 0; i < 4; i++) {
		if (n - remain[i] > 0) {
			printf("%d * %.2lf = %.lf\n", remain[i], tax[i], remain[i] * tax[i]);
			sum += remain[i] * tax[i];
			n -= remain[i];
		}
		else {
			printf("%d * %.2lf = %.lf\n", n, tax[i], n * tax[i]);
			sum += n * tax[i];
			printf("= %d", sum);
			break;
		}
	}

	return 0;
}