// 2018-1 EPPER #1
// 고민 : while or for 사용해서 조건 표현해야하는데 어떻게 하지?

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n=1; // 정수 개수
	int i = 1, j = 1; // 합을 구할 구간 i j 
	int sum = 0;
	int p = 0; // 정수 값 변수


	//while (n <1 || n > 10000)
		scanf("%d", &n); // 정수 개수 받음
	//while ( i < 1 || j > n)
		scanf("%d %d", &i, &j);
	for (int w = 1; w <= n; w++) {
		scanf("%d", &p);
		if (i <= w && w <= j)
			sum += p;
	}
	
	printf("결과 %d", sum);
}