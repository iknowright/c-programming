#include<stdio.h>
int main(){
	int digit,digit_count[10]={0};
	long n;
	printf("Enter a number:\n");
	scanf("%ld",&n);
	printf("Digit:     0 1 2 3 4 5 6 7 8 9\n");
	printf("Occurences:");
	while(n>0){
		digit=n%10;
		digit_count[digit]++;
		n/=10;
	}
	for(digit=0;digit<10;digit++){
		printf("%d ",digit_count[digit]);
	}
	return 0;
}
