#include<stdio.h>
int main(){
	printf("Please enter a first and last name: ");
	char ch,firstname;
	firstname=getchar();
	do{
		ch=getchar();
	}while(ch!=' ');
	for(;;){
		ch=getchar();
		if(ch=='\n')
			break;
		printf("%c",ch);
	}
	printf(", %c.\n",firstname);
	return 0;	
}