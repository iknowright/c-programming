#include<stdio.h>
int main(){
    int hr,min,mins,d1,d2;
    printf("Enter a 24-hour time:");
    scanf("%d:%d",&hr,&min);
    mins=hr*60+min;
    if(mins<=400)
        printf("Closest departure time is 8:00 a.m.,arriving at 10:16 a.m.\n");
    else if(mins>400&&mins<=583){
        d1=mins-400;d2=583-mins;
        if(d1<d2)
            printf("Closest departure time is 8:00 a.m.,arriving at 10:16 a.m.\n");
        else
            printf("Closest departure time is 9:43 a.m.,arriving at 11:52 a.m.\n");}
    else if(mins>583&&mins<=679){
        d1=mins-583;d2=679-mins;
        if(d1<d2)
            printf("Closest departure time is 9:43 a.m.,arriving at 11:52 a.m.\n");
        else
            printf("Closest departure time is 11:19 a.m.,arriving at 1:31 p.m.\n");}
    else if(mins>679&&mins<=767){
        d1=mins-679;d2=767-mins;
        if(d1<d2)
            printf("Closest departure time is 11:19 a.m.,arriving at 1:31 p.m.\n");
        else
            printf("Closest departure time is 12:47 p.m.,arriving at 3:00 p.m.\n");}
    else if(mins>767&&mins<=840){
        d1=mins-767;d2=840-mins;
        if(d1<d2)
            printf("Closest departure time is 12:47 p.m.,arriving at 3:00 p.m.\n");
        else
            printf("Closest departure time is 2:00 p.m.,arriving at 4:08 p.m.\n");}
    else if(mins>840&&mins<=945){
        d1=mins-840;d2=945-mins;
        if(d1<d2)
            printf("Closest departure time is 2:00 p.m.,arriving at 4:08 p.m.\n");
        else
            printf("Closest departure time is 3:45 a.m.,arriving at 5:55 p.m.\n");}
    else if(mins>945&&mins<=1140){
        d1=mins-945;d2=1140-mins;
        if(d1<d2)
            printf("Closest departure time is 3:45 a.m.,arriving at 5:55 p.m.\n");
        else
            printf("Closest departure time is 7:00 p.m.,arriving at 9:20 p.m.\n");}
    else if(mins>1140&&mins<=1350){
        d1=mins-1140;d2=1350-mins;
        if(d1<d2)
            printf("Closest departure time is 7:00 p.m.,arriving at 9:20 p.m.\n");
        else
            printf("Closest departure time is 9:45 a.m.,arriving at 11:58 p.m.\n");}
    else if(mins>=1350)
        printf("Closest departure time is 9:45 p.m.,arriving at 11:58 p.m.\n");
    return 0;
}
