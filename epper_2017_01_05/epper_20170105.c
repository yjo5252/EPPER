//2017-1 EPPER Q5
// ¡Ø 3 steps
#define _CRT_SECURE_NO_WARNINGS
#define MAX 10
#include <stdio.h>

int main(void)
{
	int row = 0, col = 0; // m *n
	int x = 0, y = 0; 
	int arr[MAX + 5][MAX + 5] = { 0 };
	int arrt[MAX + 5][MAX + 5] = { 0 }; // transpose matrix

	printf("row x col = ");
	scanf("%d %d", &row, &col);


	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			scanf("%d", &arr[x][y]);
		}
	}
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
		
			arrt[y][x] = arr[x][y];
		}
	}

	for (x = 0; x < col; x++)
	{
		for (y = 0; y < row; y++)
		{
			printf("%d ",arrt[x][y]);
		}
		printf("\n");
	}
}