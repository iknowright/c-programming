#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int N;//global variable
void add(float [][*],float [][*],float [][*]);
void multiplication(float [][*],float [][*],float [][*]);
float det(int ,float [][*]);
int main(int argc,char *argv[]){
	int fun,type,i,j;
	N=atoi(argv[1]);
	fun=atoi(argv[2]);
	type=atoi(argv[3]);
	float Result[N][N],M1[N][N],M2[N][N],R[N][N];
	switch(fun){
	case 0: case 1:
		switch(type){
		case 0:
			srand((unsigned) time(NULL));
			for(j=0;j<N;j++){
				for(i=0;i<N;i++){
				M1[j][i]=rand()%100;
				}
			}
			for(j=0;j<N;j++){
				for(i=0;i<N;i++){
				M2[j][i]=rand()%100;
				}
			}
			break;
		case 1:
			for(j=0;j<N;j++){
				for(i=0;i<N;i++){
				scanf("%f",&M1[j][i]);
				}
			}
			for(j=0;j<N;j++){
				for(i=0;i<N;i++){
				scanf("%f",&M2[j][i]);
				}
			}
			break;
		}
		break;
	case 2:
		switch(type){
		case 0:
			srand((unsigned) time(NULL));
			for(j=0;j<N;j++){
				for(i=0;i<N;i++){
				R[j][i]=rand()%100;
				}
			}
			break;
		case 1:
			for(j=0;j<N;j++){
				for(i=0;i<N;i++){
				scanf("%f",&R[j][i]);
				}
			}	
			break;
		}
		break;
	}
	switch(fun){
		case 0:
			add(Result,M1,M2);
			break;
		case 1:
			multiplication(Result,M1,M2);
			break;
		case 2:
			printf("%.2f\n",det(N,R));
			break;
	}
	return 0;
}
void add(float Result[][N],float M1[][N],float M2[][N]){
	int i,j;
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
		Result[j][i]=M1[j][i]+M2[j][i];
		printf("%.2f\n",Result[j][i]);
		}
	}
}
void multiplication(float Result[][N],float M1[][N],float M2[][N]){
	int i,j,k;
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			Result[j][i]=0;
			for(k=0;k<N;k++){
				Result[j][i]+=M1[j][k]*M2[k][i];
			}
			printf("%.2f\n",Result[j][i]);
		}
	}
}
float det(int N,float R[][N]){
	int i,j;
	int sign,x,y;
	int p,q;
	float r[N-1][N-1],v[N];
	float value=0;
	if(N==2){
    	value=0;
   		value=(R[0][0]*R[1][1])-(R[0][1]*R[1][0]);
    	return value;
	}
	else{
		for(x=0;x<N;x++){
			q=0;
			for(j=1;j<N;j++){
				p=0;
				for(i=0;i<N;i++){
					if(i==x){
						r[q][p]=R[j][++i];
					}
					else{
						r[q][p]=R[j][i];
					}
					++p;
				}
				++q;
			}
			sign=1;
			for(y=1;y<=x;y++){
				sign=(-1)*sign;
			}
			v[x]=sign*det(N-1,r);
		}
		value=0.0f;
		for(x=0;x<N;x++){
			value+=(R[0][x]*v[x]);
		}
		return value;
	}
}







	
		


	

