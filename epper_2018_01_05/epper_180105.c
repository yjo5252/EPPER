#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main(void) {
	int date=0; 
	int car=0; 
	int key = 0;
	int numCheck = 0;
	int sum = 0;

	scanf("%d", &date);
	key = date % 10;

	scanf("%d", &car); // 1 <= car <= 100, number of car

	for (int i = 0; i < car; i++) {
		scanf("%d", &numCheck);
		numCheck = numCheck % 10;
		if (numCheck == key || numCheck == (key + 5) % 10)
			sum += 1;
		
	}
	
	printf("Number of cars violated Car Policy is %d", sum);
}