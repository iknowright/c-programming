#include<stdio.h>
int main(){
	int a,b,num,denom;
	printf("Enter a fraction:");
	scanf("%d/%d",&a,&b);
	num=a;denom=b;
	for(;;){
		if(a>=b){a-=b;}
		else{b-=a;}
		if(a==0){printf("In lowest term:%d/%d\n",num/b,denom/b);break;}
		else if(b==0){printf("In lowest term:%d/%d\n",num/a,denom/a);break;}}}