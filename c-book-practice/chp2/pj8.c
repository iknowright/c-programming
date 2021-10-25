#include<stdio.h>

main(){
	float loan, rate, payment,balance1,balance2,balance3,balance0,mrate;
	printf("Enter amount of loan:");
	scanf("%f",&loan);
	printf("Enter interest rate:");
	scanf("%f", &rate);
	printf("Enter monthly payment:");
	scanf("%f",&payment);

	mrate = rate/12/100;
	balance0 = loan;
	balance1 = balance0 - payment + (balance0 * mrate);
	balance2 = balance1 - payment + (balance1 * mrate);
	balance3 = balance2 - payment + (balance2 * mrate);

	printf("Balance remaining after first payment: $%.2f\n",balance1);
	printf("Balance remaining after second payment: $%.2f\n",balance2);
	printf("Balance remaining after third payment: $%.2f\n",balance3);
	
	return 0;
	}

	
