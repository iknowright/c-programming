#include<stdio.h>
#define bias 127.0f //bias is 127
int main(int argc,char *argv[]){
	int A[32],i,j,k;
	//i,k,k is for the loop
	double a[32],exponent,Exp,fraction,value;
	//value is result,Exp =2^expopnent
		for(i=0;i<32;i++){
		//assign every bit to an array
		A[i]=argv[1][i]-'0';
		//ASCII to integer
		a[i]=(double)A[i];
		//make all the value to double
		}
	//1st to 8th array is exponent value in base 2
	j=1;
	for(i=7;i>=1;i--){
		for(k=1;k<=j;k++)
		a[i]*=2.0f;
		//make each array to base 10,from 2 to 128
		j++;
	}
	exponent=0.0f;
	//set exponent be 0 and start the loop
	for(i=1;i<=8;i++){
	exponent=exponent+a[i];
	//encoded exponent is from a[1] to a[8]
	//sum up the encoded exponent value
	}
	exponent=exponent-bias;
	//actual exponent is to minus bias
	if(exponent<0.0f){
		Exp=1.0f;
		for(i=-1;i>=exponent;i--){
		Exp/=2.0f;
		//calculate the Exp=2^-exponent
		}
	}
	else if(exponent==0){
		Exp=1.0f;
		//if exponent degree is 0,Exp =1
	}
	else if(exponent>1.0f){
		Exp=1.0f;
		for(i=1;i<=exponent;i++){
		Exp*=2.0f;
		//calculate Exp=2^exponent
		}
	}

	//23 bit mantissa fraction in base 2
	for(i=9;i<32;i++){
	if(a[i]==1.0f){
		for(j=1;j<=i-8;j++)
			a[i]/=2.0f;
			//each bit array in base 10
	}
	}
	fraction=0.0f;
	for(i=9;i<31;i++){
	fraction=fraction+a[i];
	//sum the fraction part of mantissa
	}
	value=(1.0f+fraction) * Exp;
	//result formula
	if(a[0]==1)
		printf("-");
		//sign bit
	printf("%.23e\n",value);
	//print result
	return 0;
}