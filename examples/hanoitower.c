#include<stdio.h>

int h(int n,char x, char y)
{
	int z;
	if(n==1){printf("move a disc from %c to %c",x,y);}
	else{
		if(x=='a')if(y=='b')z='c';else z='b';
		if(x=='b')if(y=='c')z='a';else z='c';
		if(x=='c')if(y=='a')z='b';else z='a';
	}
	h(n-1,x,z);
	h(1,x,y);
	h(n-1,z,y);
}
int main(){
	h(3,'a','b');
	return 0;
}
