#include<stdio.h>
#define bias 127.0f
int main(int argc,char *argv[]){
	int A[32],i,j,k;
	double a[32],exponent,Exp,mantissa,value;
		for(i=0;i<32;i++){
		A[i]=argv[1][i]-'0';
		a[i]=(double)A[i];
		}
	j=1;
	for(i=7;i>=1;i--){
		for(k=1;k<=j;k++)
		a[i]*=2.0f;
		j++;
	}
	exponent=0.0f;
	for(i=1;i<=8;i++){
	exponent=exponent+a[i];
	}
	exponent=exponent-bias;



	if(exponent<0.0f){
		Exp=1.0f;
		for(i=-1;i>=exponent;i--){
		Exp/=2.0f;
		}
	}
	else if(exponent==0){
		Exp=1.0f;
	}
	else if(exponent>1.0f){
		Exp=1.0f;
		for(i=1;i<=exponent;i++){
		Exp*=2.0f;
		}
	}





	for(i=9;i<32;i++){
	if(a[i]==1.0f){
		for(j=1;j<=i-8;j++)
			a[i]/=2.0f;
	}
	}
	mantissa=0.0f;
	for(i=9;i<31;i++){
	mantissa=mantissa+a[i];
	}
	value=(1.0f+mantissa) * Exp;
	
	if(a[0]==1)
		printf("-");
	printf("%.23e\n",value);
	return 0;
}