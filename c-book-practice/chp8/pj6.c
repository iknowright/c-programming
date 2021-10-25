#include<stdio.h>
#include<ctype.h>
#define MAX_CHAR_NUM 50
int main(){
	char a[MAX_CHAR_NUM]={' '},ch;
	for (int i = 0; i < MAX_CHAR_NUM; i++)
	{
		a[i]=getchar();
		switch(a[i]){
			case 'A':case 'a':a[i]='4';putchar(a[i]);break;
			case 'B':case 'b':a[i]='8';putchar(a[i]);break;
			case 'E':case 'e':a[i]='3';putchar(a[i]);break;
			case 'I':case 'i':a[i]='1';putchar(a[i]);break;
			case 'O':case 'o':a[i]='0';putchar(a[i]);break;
			case 'S':case 's':a[i]='5';putchar(a[i]);break;
			case '\n':break;
			default: a[i]=toupper(a[i]);putchar(a[i]);break;
		}
	if(a[i]=='\n'){
		for(int j=1;j<=10;j++)
			printf("!");break;
	}
	}
	return 0;
}