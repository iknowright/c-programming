#include<stdio.h>
int main(){
	int n,i;
	int value=1;
	printf("Enter a positive integer:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		value=value*i;
	printf("Factorial of %d: %d",n,value);
	return 0;
}
//for short n=7
//for int n=12
//long n=12
