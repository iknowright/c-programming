#include<stdio.h>
int main(void){
    int grade,tendigit;
    printf("Enter numerical grade:");
    scanf("%d",&grade);
    tendigit=grade/10;
    printf("Letter grade:");
    if(grade==100)
        printf("A\n");
    switch(tendigit){
    case 9:
        printf("A\n");break;
    case 8:
        printf("B\n");break;
    case 7:
        printf("C\n");break;
    case 6:
        printf("D\n");break;
    default:
        printf("F\n");break;
    }
    return 0;
}
