#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX 100
int main(void) {

	int size = 0, start = 0, term = 0;
	int arr[100];
	int tmp = 0;
	
	printf("배열의 크기를 입력하시오 : ");
	scanf("%d", &size);


	printf("배열원소를 입력하시오 : ");
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	printf("시작 위치(s)와 끝 위치(t)를 입력하시오 : ");
	scanf("%d %d", &start, &term);
	
	tmp = arr[term];
	for (int i = term; i >= start; i--) {
		arr[i] = arr[i - 1];
	}
	arr[start] = tmp;

	printf("배열의 이동 결과 : ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}