#include<stdio.h>
int main(){
float value1,value2;
char ch;
printf("Enter n expression:");
scanf("%f",&value1);
for(;;){
ch=getchar();
if(ch=='\n')
break;
scanf("%f",&value2);
switch(ch){
case '+':value1+=value2;break;
case '-':value1+=value2;break;
case '*':value1*=value2;break;
case '/':value1/=value2;break;}}
printf("value of expression: %.1f",value1);
return 0;}