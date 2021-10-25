#include<stdio.h>
int main(){
	float a,epsilon,e,I;
	int n,i;
	printf("Enter the smallest term:");
	scanf("%f",&epsilon);
	a=1.0f;
	e=1.0f;
	for(i=1;;i++){
I=i;
a=(a/I);
e+=a;
		if(a<epsilon)break;}
	printf("%.10f",e);
	return 0;}