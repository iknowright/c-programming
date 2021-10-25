#include<stdio.h>
int main(){
  int a,b,c,d,L1,L2,S1,S2;
  printf("Enter four integers:");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  L1=a>b?a:b;
  L2=c>d?c:d;
  S1=a<b?a:b;
  S2=c<d?c:d;
  printf("Largest interger is %d\n",L1>L2?L1:L2);
  printf("smallest interger is %d\n",S1<S2?S1:S2);

  return 0;
}
