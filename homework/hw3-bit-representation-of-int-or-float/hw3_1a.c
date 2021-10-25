#include<stdio.h>
#define bias 127
int main(int argc,char *argv[]){
    int N;//select  int for float
    N=atoi(argv[1]);

    /*****************/
    //int to bit pattern
    if(N==1){
        int X,i;
        X=atoi(argv[2]);
		for(i=31;i>=0;i--)
		//shift to the 1st bit from left to right
		if(X&1<<i)
		//testing a bit
			printf("1");
			//print bit
		else
			printf("0");
		printf("\n");
    }
    /******************/
    //float to IEEE bit pattern
    else if(N==2){
		int i,x,exp;
		float X;
        x=atoi(argv[2]);
        //argument input is a integer
		X = x;
		//force conversion
		//----------------------------
		//first bit is sign bit
		if(X>=0.0f)
			printf("0");
			//sign bit
		else
			printf("1");
			//sign bit
		if(X<0.0f)
			//consider positive value's calculation
			X=-X;
		//----------------------------
		if((int)X>1){
			//actual exponent is positive
			for(i=1;;i++){
				//loop to calculate the exponent value
				X/=2.0f;
				//devide 2 until the first digit is 1
				if((int)X==1)			
					break;
					//break to obtain the exponent
			}
			exp=i+ bias;
		}
		else if((int)X<1){
			for(i=-1;;i--){
				//loop to calculate the exponent value
				X*=2.0f;
				//multiply 2 until the first digit is 1
				if((int)X==1)
					break;
					//break to obtain the exponent
			exp=i+ bias;
			}
		}
		else if((int)X==1){
			//if X fist digit start with 1,exponent is 0
			exp=bias;
		}
		//----------------------------
		//exponent base 10 to base 2 in 2nd to 9th bit
		for(i=7;i>=0;i--){
			if(exp&1<<i)
				printf("1");
			else
				printf("0");
		}
		//----------------------------
		//fraction to mantissa
		X-=(int)X;
		for(i=1;i<=23;i++){
			X*=2.0f;
			if((int)X==1){
				printf("1");
				X-=(int)X;}
			else
				{printf("0");}}
	printf("\n");
	}
	return 0;
}

