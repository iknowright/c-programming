#include<stdio.h>
#define bias 127.0f //bias is 127
int main(int argc,char *argv[]){
	int i,*A;
	float value;
	value=0.0f;
	//value of bit pattern initiate with 0,with 32 0s
	A=(int*)&value;
	//use pointer A to act float as int
	for(i=0;i<31;i++){
	if((argv[1][i]-'0')==1)
		//same as atoi
		*A|=1<<(31-i);
		//value getting set everytime it meets the condition
		//when ith array is 1,to set the bit,we shift by (31-i)
	}
	printf("%.23e\n",value);//print the value
}
		