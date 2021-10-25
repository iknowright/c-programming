#include<stdio.h>
int main(){
	int a,b,n;
	b=2;
	a=b*b;
	printf("Enter a number:");
	scanf("%d",&n);
	while(a<n){
		printf("%d\n",a);
		b+=2;
		a=b*b;
	}
	return 0;
}