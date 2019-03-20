//2017-1 EPPER Q1
// find common multiples of 2 and 3
#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 1; // 1 <= x <= n
	int n = 1;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		if (x % 6 == 0)
			printf("%d ", x);
		x++;
	}
}