#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int partition(int n, int k) {
	int count = 0, i;
	if (n < k)	k = n;
	if (n == 0) return 1;

	for (i = 1; i <= k; i++)
		count += partition(n - i, i);
	printf("P(%d, %d) = %d\n", n, k, count);
	return count;
}

int main(void) {
	int result = 0;
	int input = 0;

	printf("���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &input);

	result = partition(input, input);
	printf("%d �������� %d�����Դϴ�.\n", input, result);
}