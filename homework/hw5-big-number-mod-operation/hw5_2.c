#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	unsigned long long int n,h,i,a,b,g;
	char *ptr;
	typedef uint64_t uintmax_t;
	g=strtoul(argv[1],&ptr,10);
	h=strtoul(argv[2],&ptr,10);
	n=strtoul(argv[3],&ptr,10);
	switch(h){
		case 0:
			printf("1");break;
		case 1:
			printf("%ld",g%n);break;
		default:	
			a=g%n;b=g%n;
			for(i=2;i<=h;i++){
				a=((uintmax_t)(a*b))%n;
			}
			printf("%ld\n",a);
			break;
		}
	return 0;
}
	