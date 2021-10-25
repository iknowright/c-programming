#include<stdio.h>

main(){
	float f;
	printf("Enter an amout:");
	scanf("%f",&f);

	printf("With tax added: $%.2f\n",f *1.05);

	return 0;
	}
