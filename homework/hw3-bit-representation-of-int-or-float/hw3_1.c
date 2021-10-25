#include<stdio.h>
#define bias 127
int main(int argc,char *argv[]){
    int N;//select  int for cloat
    N=atoi(argv[1]);

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
    else if(N==2){
		int i,x,*A;
		float X;
		x=atoi(argv[2]);
		X=x;
        //argument input is a integer
		A=(int*)&X;
		//make float point acts as integer
		for(i=31;i>=0;i--)
		//shift to the 1st bit from left to right
		if(*A&1<<i){
		//testing a bit
			printf("1");
		}
			//print bit
		else{
			printf("0");
		}
		printf("\n");
	}
	return 0;
}

