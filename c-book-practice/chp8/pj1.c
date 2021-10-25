#include<stdio.h>
#include<stdbool.h>
int main(){
	int digit;
	long n;
	bool digit_seen[10]={false};
	printf("Enter a number:\n");
	scanf("%ld",&n);
	printf("Repeated digit:");
	while(n>0){
		digit=n%10;
		if(digit_seen[digit])
			printf("%d ",digit);
		digit_seen[digit]=true;
		n/=10;
	}
	if(n==0)
		printf("none");
	return 0;
}