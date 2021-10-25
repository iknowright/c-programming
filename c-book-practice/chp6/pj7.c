#include<stdio.h>
int main(){
	int square,i,n,odd;
	printf("Enter number of entries in table:");
	scanf("%d",&n);
	square=0;
	odd=1;
	for(i=1;i<=n;i++){
		square+=odd;
		odd+=2;
		printf("%10d%10d\n",i,square);
	}
}