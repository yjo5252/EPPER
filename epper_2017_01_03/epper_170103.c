#define _CRT_SECURE_NO_WARNINGS
//2017-1 EPPER Q43
/*※ #include <stdlib.h>
	char **stdname; // string array
	
	stdname = (char **)malloc(n * sizeof(char *));
	 for ( 0 ~ n) 
	{ 
		stdname[i] = (char *) malloc (50 * sizeof(char*));
		scanf("%s", stdname[i]);
	}
	for (int i = 0 ; i < 10; i++) 
	{	free(stdname[i]); }

	free(stdname);
	 이중 배열 scanf (
*/
#include <stdio.h>

#define MAX 50
int main(void) {
	char z[MAX + 5][MAX + 5];
	int num = '\0';
	int i = 0;

	printf("학생 수 입력\n");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%s", z[i]);
	}

	for (i = 0; i < num; i++)
	{
		printf("Helo, %s!\n", z[i]);
	}

}