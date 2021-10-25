#include <stdio.h>
#include <stdlib.h>
union binary{
    int int_x;
	float float_x;
};
//function prototype
void bit_pattern(union binary u);
//main :)
int main(int argc,char *argv[]){
	union binary u;	
   	int N;
	int i;
	N=atoi(argv[1]);
	switch(N){
	case 1:
    	u.int_x=atoi(argv[2]);
		bit_pattern(u);
		break;
	case 2:
		u.float_x=atof(argv[2]);
		bit_pattern(u);
		break;
	case 3:
		//setting the bit integer type
		u.int_x=0;
		for(i=0;i<31;i++){
			if((argv[2][i]-'0')==1)
				u.int_x|=1<<(31-i);
		}
		printf("%.23e\n",u.float_x);
		break;
	}
	return 0;
}
//prints the bit pattern by using bitwise operation
void bit_pattern(union binary u){
	int i;
	for(i=31;i>=0;i--){
		if(u.int_x&1<<i)
			printf("1");
		else
			printf("0");
		}
	printf("\n");
} 