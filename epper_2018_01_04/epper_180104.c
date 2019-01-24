#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//배열 자체는 주소이지만
// index를 지칭할 경우 값이다.
// 따라서 &x[0]
int main(void) {
	int x[4];
	int y[4];



	scanf("%d %d", &x[0], &y[0]);
	scanf("%d %d", &x[1], &y[1]);
	scanf("%d %d", &x[2], &y[2]);

	if (x[0] == x[1]) x[3] = x[2];
	else if (x[1] == x[2]) x[3] = x[0];
	else if (x[2] == x[0]) x[3] = x[1];

	if (y[0] == y[1]) y[3] = y[2];
	else if (y[1] == y[2]) y[3] = y[0];
	else if (y[2] == y[0]) y[3] = y[1];

	printf("%d %d", x[3], y[3]);
}