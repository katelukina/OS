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
 	int var;
 	printf("Type of figure(0-3):"); //number of type of figure
 	scanf("%d", &var);

 	//Zero Case: triangle from the 3rd exercise

 	if (var==0)
 	{							
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
 	}

 	//First Case: ortogonal triangle

 	if (var==1)
 	{
	 	for(int i = 0; i<number; i++)
	 	{
	 		for (int k = 0; k < j; k++)
	 		{
	 			printf("*");
	 		}
			
	 		j = j+1;
	 		
	 		printf("\n");
	 	
	 	}
 	}

 	//Second Case: arrow triangle

 	if (var==2)
 	{
 		int p = number/2 ;

	 	for(int i = 0; i<p; i++)
	 	{
	 		for (int k = 0; k < j; k++)
	 		{
	 			printf("*");
	 		}
			
	 		j = j+1;

	 		printf("\n");
	 	}

		if ( number%2==1)
		{
		 	for(int i = p; i<number; i++)
		 	{
		 		for (int k = 0; k < j; k++)
		 		{
		 			printf("*");
		 		}
				
		 		j = j-1;

		 		printf("\n");
		 	}
		}	

		if ( number%2==0)
		{
			j--;

		 	for(int i = p; i<number; i++)
		 	{
		 		for (int k = 0; k < j; k++)
		 		{
		 			printf("*");
		 		}
				
		 		j = j-1;

		 		printf("\n");
		 	}
		}
 	}

 	//Third Case: rectangle

 	if (var==3)
 	{
	 	for(int i = 0; i<number; i++)
	 	{
	 		for (int k = 0; k < number; k++)
	 		{
	 			printf("*");
	 		}
	 		
	 		printf("\n");
	 	}
 	}
	return 0;
}