#include<stdio.h>
int main(){
	int i,n;
	float balance,rate,payment;
	printf("Enter amount of loan:");
	scanf("%f",&balance);
	printf("Enter interest rate:");
	scanf("%f",&rate);
	printf("Enter monthly payment:");
	scanf("%f",&payment);
	printf("Enter the number of payment:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		balance=balance-payment+(balance*(rate/100.0f)/12.0f);
	}
	printf("Balance remaining after %d",n);
	printf(" payment: $%.2f\n",balance);
	return 0;
}