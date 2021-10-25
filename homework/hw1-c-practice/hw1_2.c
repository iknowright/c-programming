#include<stdio.h>

int main(int argc, char *argv[])
{
	int x,y; //let y be the value of expression	
	
	x = atoi(argv[1]); //string to integer
	
	y = 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6; //calculation

	printf("Value is %d\n", y  ); //output
	return 0;
}
