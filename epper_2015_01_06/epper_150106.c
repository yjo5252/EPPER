//제곱근 구하는 법칙! //제곱근 == use math.h library 
//double sqrt(double x)
#define _CRT_SECURE_NO_WARNINGS
typedef int bool;
#define true 1
#define false 0

#include <stdio.h>
#include <math.h>

int main(void) {

	int n = 1, tmp = 1;
	bool result = false;
	printf("양의 정수를 입력하시오 : ");
	scanf("%d", &n);

	while (n >= 0) {		
		for (int i = 1; i < sqrt((double)n); i++) {
			tmp = n - pow(i, 2.0);
			for (int j = 1; j < sqrt((double)n); j++) {
				if (pow(j, 2.0) == tmp) {
					printf("%d = %0.0f + %0.0f 만족합니다.\n", n, pow(i, 2.0), pow(j, 2.0));
					goto restart;
				}
			}
		}
		printf("%d은 만족하지 않습니다.\n", n);

	restart: printf("양의 정수를 입력하시오 : ");
		scanf("%d", &n);
	}
	if (n < 0) {
		printf("프로그램을 종료합니다.\n");
		return 0;
	}
}
	
