#include<stdio.h>

main()
{
	int num_1, date, month, year;
	float unit_1;
	
	printf("Enter item number:");
	scanf("%d",&num_1);

	printf("Enter unit price:");
	scanf("%f",&unit_1);

	printf("Enter purchase date:(mm/dd/yyyy)");
	scanf("%d/%d/%d",&date,&month,&year);

	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
	printf("%d\t$%7.2f%d/%d/%d\n",num_1,unit_1,date,month,year);
	
	return 0;

}
