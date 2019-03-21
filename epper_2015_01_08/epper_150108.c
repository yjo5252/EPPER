//sorting (algorithm)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX_STUDENT 100
typedef struct student {
	char name[20];
	int math;
}STUDENT;


int main(void) {

	int num = 0;
	int maxScore = 0, tmp = 0;
	STUDENT arr[MAX_STUDENT];
	STUDENT temp;

	printf("학생 수를 입력하시오 : ");
	scanf("%d", &num);
	
	//get input
	printf("학생의 이름과 수학점수를 입력하시오 : ");
	for (int i = 0; i < num; i++) {
		scanf("%s", &arr[i].name);
		scanf("%d", &arr[i].math);
	}

	//sort 
	for (int j = 0 ; j < num ; j++){
		for (int i = 0; i < num - 1; i++) {
			if (arr[i].math > arr[i + 1].math) {
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;

			}
		}
	}

	printf("정렬 결과:\n");
	for (int i = 0; i < num; i++){
		printf("%s %d\n", arr[i].name, arr[i].math);
	}
}