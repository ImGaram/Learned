#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define MAX 10000

void radixSort(int* a, int n) {
	int result[MAX], maxValue = 0;
	int exp = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] > maxValue) maxValue = a[i];
	}	// �ִ� ����

	while (maxValue / exp > 0) { // 1�� �ڸ��� ���
		int bucket[10] = { 0 };
		for (int i = 0; i < n; i++) {
			bucket[a[i] / exp % 10]++;
		} // �ڸ����� ���� bucket�� �ڸ�����° �ε����� �� ����

		for (int i = 1; i < 10; i++) {
			bucket[i] += bucket[i - 1]; 
		} // ����� ��� ���� ���

		for (int i = n - 1; i >= 0; i--) { //���� �ڸ��� ������ ������ ����
			result[--bucket[a[i] / exp % 10]] = a[i];
		}

		for (int i = 0; i < n; i++) a[i] = result[i]; // �⺻ �迭 ����
		exp *= 10;
	}
}

int main(void) {
	int a[MAX];
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}

	radixSort(a, n);

	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("pause");
	return 0;
}