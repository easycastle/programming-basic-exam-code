#define _CRT_SECURE_NO_WARNINGS﻿
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == 0) {
		printf("%lf", (double)-c / b);
	}
	else {
		int d = b * b - 4 * a * c;

		if (d > 0) {
			double n = ((-1 * b) + sqrt(d)) / (2 * a);
			double m = ((-1 * b) - sqrt(d)) / (2 * a);

			printf("%lf, %lf", n, m);
		}
		else if (d == 0) printf("%lf", ((-1 * b) + sqrt(d)) / (2 * a));
		else if (d < 0) printf("허근입니다");
	}

	return 0;
}