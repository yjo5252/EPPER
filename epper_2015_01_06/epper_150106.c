//������ ���ϴ� ��Ģ! //������ == use math.h library 
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
	printf("���� ������ �Է��Ͻÿ� : ");
	scanf("%d", &n);

	while (n >= 0) {		
		for (int i = 1; i < sqrt((double)n); i++) {
			tmp = n - pow(i, 2.0);
			for (int j = 1; j < sqrt((double)n); j++) {
				if (pow(j, 2.0) == tmp) {
					printf("%d = %0.0f + %0.0f �����մϴ�.\n", n, pow(i, 2.0), pow(j, 2.0));
					goto restart;
				}
			}
		}
		printf("%d�� �������� �ʽ��ϴ�.\n", n);

	restart: printf("���� ������ �Է��Ͻÿ� : ");
		scanf("%d", &n);
	}
	if (n < 0) {
		printf("���α׷��� �����մϴ�.\n");
		return 0;
	}
}
	
