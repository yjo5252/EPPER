#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX 100
int main(void) {

	int size = 0, start = 0, term = 0;
	int arr[100];
	int tmp = 0;
	
	printf("�迭�� ũ�⸦ �Է��Ͻÿ� : ");
	scanf("%d", &size);


	printf("�迭���Ҹ� �Է��Ͻÿ� : ");
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	printf("���� ��ġ(s)�� �� ��ġ(t)�� �Է��Ͻÿ� : ");
	scanf("%d %d", &start, &term);
	
	tmp = arr[term];
	for (int i = term; i >= start; i--) {
		arr[i] = arr[i - 1];
	}
	arr[start] = tmp;

	printf("�迭�� �̵� ��� : ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}