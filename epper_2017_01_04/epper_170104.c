//2017-1 EPPER Q4.
//�� use extra variables (num, q)
#define _CRT_SECURE_NO_WARNINGS

//�� use boolean type
typedef int bool;
#define false 0
#define true 1

/*�� 1�� �ڸ��� %10,
	10�� �ڸ��� / 10
	100�� �ڸ��� / 100
	1000�� �ڸ��� / 10000
*/ 
#include <stdio.h>

int main(void) {
	int s = 0, e = 0; // start ~ end number
	int x = 0, num = 0;  // for ������ �����ϴ� x, for �� �ȿ��� ����ϴ� num
	int count = 0;
	int d = 10000, q = 0; // d = divisor, q = quotient ,r = remainder
	bool clap = false;
	printf("write 2 integers to start and end the game (1 <= num < = 10000) \n");
	scanf("%d %d", &s, &e);
	x = s;

	for (x = s; x <= e; x++) {
		num = x; // loop �ۿ�
		while (d != 0)
		{
			q = num / d; //q ������Ʈ �Ǵ� ���� ���� �־���.
			if (q== 3 || q == 6 || q == 9)
				clap = true;
			num = num % d;
			d = d / 10;
		}
		if (clap)	count++;

		clap = false;
		d = 10000;
	}
	printf("total amount of claps : %d\n", count);
}