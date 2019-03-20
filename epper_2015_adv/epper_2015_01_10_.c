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

	printf("양의 정수를 입력하시오 : ");
	scanf("%d", &input);

	result = partition(input, input);
	printf("%d 수분할은 %d가지입니다.\n", input, result);
}