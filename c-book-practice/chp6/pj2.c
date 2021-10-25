#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two integer:");
	scanf("%d%d",&a,&b);
	for(;;){
		if(a>=b){
			a-=b;
		}
		else{
			b-=a;
		}
		if(a==0){
			printf("Greatest common divisor:%d\n",b);
			break;}
		else if(b==0){
			printf("Greatest common divisor:%d\n",a);
			break;}}
	return 0;}