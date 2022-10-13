#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, sum = 0, max = 0;
	int num;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		sum += num;
		if (max < num) max = num;
	}

	printf("%d\n", sum);
	printf("%d\n", max);

	return 0;
}