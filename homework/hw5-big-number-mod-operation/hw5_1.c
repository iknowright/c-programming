#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int fun;
	char *ptr;
	unsigned long long int g,n;
	fun=atoi(argv[1]);
	g=strtoul(argv[2],&ptr,10);
	n=strtoul(argv[3],&ptr,10);
	typedef uint64_t uintmax_t;
	uintmax_t big;
	if(fun==0){
		big=g+g;
		printf("%ld\n",big%n);
	}
	else if(fun==1){
		big=g*g;
		printf("%ld",big%n);	
	}
	return 0;
}