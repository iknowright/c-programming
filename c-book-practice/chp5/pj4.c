#include<stdio.h>
int main(){
    int knot;
    printf("Enter a wind speed(in knots):");
    scanf("%d",&knot);
    if(knot<1)
        printf("Wind force is Calm");
    if(knot>=1&&knot<=3)
        printf("Wind force is Light air");
    if(knot>=4&&knot<=27)
        printf("Wind force is Breeze");
    if(knot>=28&&knot<=47)
        printf("Wind force is Gale");
    if(knot>=48&&knot<=63)
        printf("Wind force is Storm");
    if(knot>63)
        printf("Wind force is Hurricane");
    return 0;
}
