#include <stdio.h>
#include <string.h>

int main()
{

	char word[50];

 	printf("Your string:");
 	scanf("%s", word);

 	int len = strlen(word);

 	char temp[50];
 	int j=0;

 	for(int i = len; i >= 0 && j <=len; i--, j++)
 	{
		temp[j]=word[i];
 	}

 	printf("Reverse:");

 	for(int i=0; i<=len; i++)
 	{
 		printf("%c", temp[i]);
 	}

 	printf("\n");

	return 0;
}