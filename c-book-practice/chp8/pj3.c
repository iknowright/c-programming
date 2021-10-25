#include<stdio.h>
#include<stdbool.h>
int main(){
	int digit;
	long n,terminate;
	for(;;){
	bool digit_seen[10]={false};
	printf("Enter a number:\n");
	scanf("%ld",&n);
	terminate=n;
	if(terminate==0)
		break;
	while(n>0){
		digit=n%10;
		if(digit_seen[digit])
			break;
		digit_seen[digit]=true;
		n/=10;
	}
	if(n>0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");
	}
	return 0;
}