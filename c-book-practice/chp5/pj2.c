#include<stdio.h>

int main(){
	int hr,min;
	printf("Enter a 24-hour time:");
	scanf("%d:%d",&hr,&min);
	printf("Euivalent 12-hour time:");
	if(hr>12)
		printf("%d:%.2d PM\n",hr-12,min);
	else if(hr<12)
		printf("%d:%.2d AM\n",hr,min);
	else if(hr==12)
		printf("%d:%.2d PM\n",hr,min);
	else if(hr==0)
		printf("12:%.2d AM\n",hr,min);
	}
