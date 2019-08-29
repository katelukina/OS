#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{

	if (argc != 2)
	{
		printf("Invalid input\n");
		return 0;
	}

	int number;

 	sscanf(argv[1], "%d", &number);

 	int full = 2*number -1;
 	int j = 1;

 	for(int i = 0; i<number; i++)
 	{
 		int p = (full-j)/2;

 		for (int k = 0; k < p; k++)
 		{
 			printf(" ");
 		}

 		for (int k = 0; k < j; k++)
 		{
 			printf("*");
 		}
		
 		j = j+2;
 		
 		printf("\n");
 	
 	}
	return 0;
}