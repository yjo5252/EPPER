#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// <�ʱ�ȭ & tag> result = 1 ;  �Ҽ����ƴϸ� result =0; �ϰ� break;

int main(void) {
	int n = 1; // 1 <= n <= 100
	int i = 0;
	scanf("%d", &n);

	for (i = 2; i < n; i++){
		if (n % i == 0) { //�Ҽ� �ƴ�
			printf("0");
			break;
		}

	}
	if (i == n ) printf("1"); 
}