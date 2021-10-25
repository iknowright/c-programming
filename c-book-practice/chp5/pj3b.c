#include<stdio.h>
int main(){
    int n;
    float commission;
    printf("Enter number of share:");
    scanf("%d",&n);
    if(n<2000)
        commission=33.00f+.03f*n;
    else
        commission=33.00f+.02f*n;
    printf("Commission:%.2f\n",commission);

    return 0;
}
