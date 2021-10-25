#include<stdio.h>
int main(){
int i=0,j=0;
char ch;
printf("Enter a sentense:");
for(;;){
ch=getchar();
if(ch=='\n'){break;}
if(ch==' '){j++;}
else{i++;}}
printf("Average word length: %.1f\n",((float)i)/((float)++j));
return 0;}