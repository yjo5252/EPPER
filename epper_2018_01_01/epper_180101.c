// 2018-1 EPPER #1
// ��� : while or for ����ؼ� ���� ǥ���ؾ��ϴµ� ��� ����?

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=1; // ���� ����
	int i = 1, j = 1; // ���� ���� ���� i j 
	int sum = 0;
	int p = 0; // ���� �� ����


	//while (n <1 || n > 10000)
		scanf("%d", &n); // ���� ���� ����
	//while ( i < 1 || j > n)
		scanf("%d %d", &i, &j);
	for (int w = 1; w <= n; w++) {
		scanf("%d", &p);
		if (i <= w && w <= j)
			sum += p;
	}
	
	printf("��� %d", sum);
}