#include<stdio.h>
#define SIZE 5
int main(){
	int a[SIZE][SIZE]={0},R[SIZE]={0},C[SIZE]={0};
	for(int i=0;i<SIZE;i++){
		printf("Enter row %d:",i+1);
		for(int j=0;j<SIZE;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Row totals:");
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			R[i]+=a[i][j];
		}
		printf("%d ",R[i]);
	}
	printf("\n");
	printf("Column totals:");
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			C[i]+=a[j][i];
		}
		printf("%d ",C[i]);
	}
	printf("\n");
	return 0;
}
