#include<stdio.h>
int main(){
	 int a,b;
	 printf("Enter a number:")	;
	 scanf("%d",&a);
	 printf("The reversal is:");
	 do{
	 	b=a%10;
	 	a=a/10;
	 	printf("%d",b);
	 } while(a>0);

	 printf("\n");
	 return 0;
}