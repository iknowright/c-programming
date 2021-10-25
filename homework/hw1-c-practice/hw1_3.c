#include<stdio.h>

int main(int argc, char *argv[])
{
	int x,y;
	
	x = atoi(argv[1]); //string to integer
	
	y =((((3*x+2)*x-5)*x-1)*x+7)*x-6 ; //calculation
	
	printf("Value is %d\n", y  ); //output
	return 0;
}
