#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
int i=100;
void long_rand();
int main(){
	srand((unsigned) time(NULL));
	long_rand();
	return 0;
}
void long_rand(void){
	i--;
	printf("%ld\n",(rand()%LONG_MAX));
	if(i>1)
		long_rand();
}