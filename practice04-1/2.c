#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = a; i <= b; i++) {
		printf("%d ", i);
	}

	return 0;
}