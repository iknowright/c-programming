#include <stdio.h>
#include <stdlib.h>
#define NUM_FUNC 3
//For the use of function pointer array//
typedef double (*F)(double,int);
//function prototypes
double powerpower(F,double,int,int);
double power(double, int);
double multiply(double, int);
double divide(double, int);
//main function,i can say no more//
int main(int argc,char *argv[]){
	F func_ptr[NUM_FUNC]={power,multiply,divide};
	double x = atof(argv[1]);
	int n = atoi(argv[2]);
	int m = atoi(argv[3]);
	int j;
	for(j=0;j<NUM_FUNC;j++){
		printf("%f\n",powerpower(func_ptr[j],x,n,m));
	}
	return 0;
}
/**********************************************
three functions which have to be pointed by type F
F is a pointer to funtion
************************************************/
double power(double x,int n){
	int i;
	double value=1.0f;
	for(i=0;i<n;i++){
		value*=x;
	}
	return value;
}
double multiply(double x,int n){
	return (double)(x*n);
}
double divide(double x,int n){
	return (double)(x/n);
}
/**************************************************
fucntion that calles pointers to pass the power 
multiply and divide function to itself for the calculation
of powerpower
****************************************************/
double powerpower(F func_ptr,double x,int n,int m){
	double value=1;
	int i;
	for(i=0;i<m;i++){
	value*=(func_ptr(x,n));
	}
	return value;
}
