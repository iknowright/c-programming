#include<stdio.h>
void reverse(int ,int [*]);
int main(){
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	if((n-1)>0)
		reverse(n,a);
	printf("\n");
	return 0;
}
void reverse(int n,int a[n]){
	printf("%d ",a[n-1]);
	if((n-1)>0)
		reverse(n-1,a);
}