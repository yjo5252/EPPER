#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// <초기화 & tag> result = 1 ;  소수가아니면 result =0; 하고 break;

int main(void) {
	int n = 1; // 1 <= n <= 100
	int i = 0;
	scanf("%d", &n);

	for (i = 2; i < n; i++){
		if (n % i == 0) { //소수 아님
			printf("0");
			break;
		}

	}
	if (i == n ) printf("1"); 
}