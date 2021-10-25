#include<stdio.h>

int main(int argc,char *argv[])
{
	int ip, op1, op2, op3 , op4, rmd1, rmd2; //ip is input number,op is ouput number,rmd is remainder number

	ip = atoi(argv[1]);  //string to integer
						
	op1 = ip / 20;				
	rmd1 = ip - op1 * 20;			
	
	op2 = rmd1 / 10;
	rmd2 = rmd1 - op2 * 10;
	
	op3 = rmd2 / 5;

	op4 = rmd2 - op3 * 5;		//op4 is last remainder 
					//and its number directly represents $1 bill.

	printf("$20 bills:%d\n",op1); //output
	printf("$10 bills:%d\n",op2);
	printf("$5 bills:%d\n",op3);
	printf("$1 bills:%d\n",op4);

	return 0;
}
