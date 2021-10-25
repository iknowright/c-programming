#include<stdio.h>

int main(){
    int ip,d1,d2,d3,d4,d5,q1,q2,q3,q4;
    printf("Enter a number between 0 and 32767:");
    scanf("%d",&ip);

    d1=ip%8;
    q1=ip/8;
    d2=q1%8;
    q2=q1/8;
    d3=q2%8;
    q3=q2/8;
    d4=q3%8;
    q4=q3/8;
    d5=q4%8;

    printf("In octal, your number is:%d%d%d%d%d",d5,d4,d3,d2,d1);
    return 0;
}
