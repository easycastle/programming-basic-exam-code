#include <stdio.h>

int main() {
	int cost = 37970;

	int n10000, n5000, n1000, n100, n10;
	// ���� ���� Ȥ�� ������ ������ �ǹ�

	n10000 = cost / 10000;
	cost %= 10000;

	n5000 = cost / 5000;
	cost %= 5000;

	n1000 = cost / 1000;
	cost %= 1000;

	n100 = cost / 100;
	cost %= 100;

	n10 = cost / 10;

	printf("37970����\n");
	printf("����¥�� %d��\n", n10000);
	printf("��õ��¥�� %d��\n", n5000);
	printf("õ��¥�� %d��\n", n1000);
	printf("���¥�� %d��\n", n100);
	printf("�ʿ�¥�� %d���� �����˴ϴ�.", n10);

	return 0;
}