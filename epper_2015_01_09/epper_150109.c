#define _CRT_SECURE_NO_WARNINGS
#define MAX 102

#include <stdio.h>
int main(void) {
	int size = 0;
	int arr[MAX], lengthU[MAX], lengthD[MAX];
	int maxlen = 0;
	int increase = 1, decrease = 1;

	printf("�迭�� ũ�⸦ �Է��Ͻÿ�: ");
	scanf("%d", &size);
	
	printf("�迭���Ҹ� �Է��Ͻÿ�: ");
	for (int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < size; i++) {
		if (i != 0) {
			if (arr[i - 1] < arr[i]) {
				decrease = 1;
				lengthD[i] = decrease;
				lengthU[i] = ++increase;
			}
			else if (arr[i - 1] > arr[i]) {
				increase = 1;
				lengthU[i] = increase;
				lengthD[i] = ++decrease;
			}
			else {
				lengthU[i] = ++increase;
				lengthD[i] = ++decrease;
			}
		}
		else {
			lengthU[i] = increase;
			lengthD[i] = decrease;
		}
	}

	maxlen = lengthD[0];
	for (int i = 0; i < size; i++) {
		if (maxlen < lengthU[i])
			maxlen = lengthU[i];
		if (maxlen < lengthD[i])
			maxlen = lengthD[i];
	}
	printf("�� ������ ����: %d\n", maxlen);

	return 0;
}