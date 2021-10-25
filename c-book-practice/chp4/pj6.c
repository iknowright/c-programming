#include<stdio.h>

int main(){
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,sum1,sum2,check1,total;
    printf("Enter the first 11 digits of a UPC:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
    	&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);

    sum2=i1+i3+i5+i7+i9+i11;
    sum1=i2+i4+i6+i8+i10,i12;
    total=sum1*3+sum2;
    check1=(9-(total-1)%10);

    printf("Check digit:%d",check1);
    return 0;
}
