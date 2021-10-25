 #include<stdio.h>

int main(){
int n,a,b,c;

printf("Enter a three-digit number:");
scanf("%d", &n);

a=n/100;
b=(n%100)/10;
c=n%10;

printf("The reversal is:%d%d%d",c,b,a);

return 0;
}
