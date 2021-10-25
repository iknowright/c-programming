#include<stdio.h>
#include<ctype.h>
int main(){
	int value=0;
	char ch;
	printf("Enter a word:");
	do{
		ch=getchar();
		ch=toupper(ch);
		switch(ch){
			case 'A':case 'E':case 'I':case 'L':case 'N':case 'U':case 'O':case 'R':case 'S':case 'T':
				value+=1;break;
			case 'D':case 'G':
				value+=2;break;
			case 'B':case 'C':case 'M':case 'P':
				value+=3;break;
			case 'F':case 'H':case 'V':case 'W':case 'Y':
				value+=4;break;
			case 'K':
				value+=5;break;
			case 'J':case 'X':
				value+=8;break;
			case 'Q':case 'Z':
				value+=10;break;
		}
	}while(ch!='\n');
	printf("Scrabble value: %d",value);
	return 0;
}