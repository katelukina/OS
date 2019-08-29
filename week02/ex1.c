#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

	int a;
	float b;
	double c;

	a = INT_MAX;
	b = FLT_MAX;
	c = DBL_MAX;

	printf("Size of a: %lu,value of a: %d \n", sizeof(a), a);
	printf("Size of b: %lu,value of b: %f \n", sizeof(b), b);
	printf("Size of c: %lu,value of c: %lf \n", sizeof(c), c);

	return 0;
}