//2017-1 EPPER Q2
//�� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	char *day[ 7 ] = { "��","��", "��", "ȭ", "��", "��", "��" };
	
	int m = 0;
	int d = 0;
	scanf("%d %d", &m, &d);
	int date = d;
	for (int i = 0; i < m-1; i++)
		date += month[i];
	printf("%s����", day[date % 7]); // %s %c
	
} 