#include<stdio.h>
int main(){
	float a,e,I;
	int n,i;
	printf("Enter number of n:");
	scanf("%d",&n);
	a=1.0f;
	e=1.0f;
	for(i=1;i<=n;i++){
		I=i;
		a=(a/I);
		e+=a;
	}
	printf("%.10f",e);
	return 0;
}