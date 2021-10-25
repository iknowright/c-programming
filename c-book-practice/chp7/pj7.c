#include<stdio.h>
int main(){
int num1,denom1,num2,denom2;
char ch;
printf("Enter two fractions separated a function sign:");
scanf("%d/%d",&num1,&denom1);
scanf("%c",&ch);
scanf("%d/%d",&num2,&denom2);
printf("The sum is: ");
switch(ch){
case '+':printf("%d/%d\n",num1 * denom2 + num2 * denom1,denom1 *denom2);break;
case '-':printf("%d/%d\n",num1 * denom2 - num2 * denom1,denom1 *denom2);break;
case '*':printf("%d/%d\n",num1 * num2, denom1 * denom2);break;
case '/':printf("%d/%d\n",num1 * denom2,denom1 * num2);break;}
return 0;}
