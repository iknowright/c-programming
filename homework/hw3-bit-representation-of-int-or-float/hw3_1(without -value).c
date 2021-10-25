#include<stdio.h>
#define bias 127
int main(int argc,char *argv[]){
    int N;
    N=atoi(argv[1]);
    if(N==1){
        int X,i;
        X=atoi(argv[2]);
		for(i=31;i>=0;i--)
		if(X&1<<i)
			printf("1");
		else
			printf("0");
		printf("\n");
    }
    else if(N==2){
		int i,x,exp;
		float X;
        x=atoi(argv[2]);
		X = x;
		if(X>=0.0f)
			printf("0");
		else
			printf("1");
		if(X<0.0f)
			X=-X;
		if(X>=1.0f)
			for(i=1;;i++){
				X/=2.0f;
				if((int)X==1)
					break;
			}
		exp=i+ bias;
		for(i=7;i>=0;i--){
			if(exp&1<<i)
				printf("1");
			else
				printf("0");
		}
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

