#include <stdio.h>
#include <string.h>

void swap(int* a, int* b)
{
	int temp ;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int n1, n2;
 	printf("Your numbers:");
 	scanf("%d %d", &n1, &n2);
 	swap(&n1, &n2);
 	printf("%d, %d\n", n1, n2);

	return 0;
}
