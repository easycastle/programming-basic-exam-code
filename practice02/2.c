#include <stdio.h>
#include <math.h>

int main() {
	double answer = (3 * pow(11.3, 3)) - (7 * pow(11.3, 2)) + 9;

	printf("x의 값이 11.3일 때, 다항식의 값은 %lf 입니다.", answer);

	return 0;
}