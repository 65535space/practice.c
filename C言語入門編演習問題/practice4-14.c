#include<stdio.h>

int main(void) {
/*
	int n, num;
	printf("���̐�������͂���F");
	scanf_s("%d", & n);
	num = n / 10;
	for (int j = 0; j < num; j++) {
		printf("1234567890");
	}
	n %= 10;
	for (int i = 1; i <= n; i++) {
		printf("%d", i);
	}
	return 0; */

	int n;

	printf("���̐�������͂���F");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d", i % 10);
	}
	return 0;
}