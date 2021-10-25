#include<stdio.h>

main(){
	int p1, p2, p3, p4, p5;

	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d",&p1,&p2,&p3,&p4,&p5);

	printf("GS1 prefix: %d\n",p1);
	printf("Group identifier: %d\n",p2);
	printf("Publisher codee: %d\n",p3);
	printf("Item number: %d\n",p4);
	printf("Check digit: %d\n",p5);

	return 0;
	
	}
