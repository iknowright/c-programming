#include<stdio.h>
int main(){
char ch;
int i;
printf("Enter a sentense:");
i=0;
do{
ch=getchar();
switch(ch){
case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
i++;break;}
}while(ch!='\n');
printf("Your sentense contains %d vowel(s)",i);
return 0;}