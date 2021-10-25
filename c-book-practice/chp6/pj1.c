#include<stdio.h>
int main(){
	float a,b;
	a=0.0f;
	for(;;){
		printf("Enter a number:");
		scanf("%f",&b);
		if(b>a){
			a=b;
		}
		if(b<=0.0f){
			printf("The largest number entered was %g\n",a);
			break;
		}
	}
	return 0;
}