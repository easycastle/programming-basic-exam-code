#include <stdio.h>

int main() {
	int x = 75; // 0100 1011

	printf("0\n");					// 0100 1011
	printf("%d\n", 0b01011111);		// 0101 1111
	printf("%d\n", 0b01001010);		// 0100 1010
	printf("%d\n", 0b01000111);		// 0100 0111

	return 0;
}