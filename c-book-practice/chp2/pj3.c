#include<stdio.h>

int main()
{
	int r , v;

	printf("Enter radius:");
	scanf("%d",&r);

	v = (4.0f/3.0f) * 3.14 * r * r * r;

	printf("Volume=%d\n", v);

	return 0;
} 

	
