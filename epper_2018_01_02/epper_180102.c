#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char blank = " ";
	char star = "*";
	int n = 1; // 홀수인 양의 정수 
	int m = 1; // n/2
	//char line[100]; // 1 <= n <= 100

	scanf("%d", &n);
	
	m = n/2 ;

	for (int i = 1; i <= m+1; i++) { // 1 ~ 3 층

		for (int j = 0; j <= m - i; j++) // 0 ~1
			printf(" ");

		for (int j = m - i + 1; j <= m + i - 1; j++) // 2 ~ 2
			printf("*");
		printf("\n");
	}
	
	for (int i = m ; i >= 1; i--) {  // 구조를 파악해서 대칭이용!
		for (int j = 0; j <= m - i; j++) 
			printf(" ");

		for (int j = m - i + 1; j <= m + i - 1; j++)
			printf("*");
		printf("\n");
	}



}