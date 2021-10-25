#include<stdio.h>
#define  N 10
#define SIZE (int)(sizeof(a)/sizeof(a[0]))
int main(){
	int a[N],i;
	printf("Enter %d numbers:",N);
	for (int i = 0; i < SIZE; i++)
		{
			scanf("%d",&a[i]);
		}
	for (int i = SIZE-1; i >=0 ; i--)
		{
			printf("%d ",a[i]);
		}
	return 0;
}