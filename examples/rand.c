#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
int main(){
	long int count[32]={0};long x;
	srand((unsigned) time(NULL));
	for(int i=1;i<=10000;i++) {
		x=rand()%LONG_MAX;
		for(int j=0;j<32;j++){
			if(x&1<<j)
				count[j]++;
		}
	}
	for (int k = 0; k < 32; k++)
	{
		printf("%d bit:%d\n",k,count[k]);
	}
	return 0;
}