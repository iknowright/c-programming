#include<stdio.h>

int main(int argc,char*argv[]){
	int year, month, day, thisyear, date, firstday, thismonth;

	thisyear=atoi(argv[1]);
	firstday = 1;  //firstday in 1899

    if(argc==2){
            for(year=1899;year<thisyear;year++){
                if((year % 400 == 0)||(year % 4 ==0 && year % 100 !=0))
                    day=366;
                else
                    day=365;
                firstday=(firstday+day)%7;
            }
            for(month=1;month<=12;month++){
                switch(month){
                    case 1: printf("January\n\n");day=31;break;
                    case 3: printf("March\n\n");day=31;break;
                    case 5: printf("May\n\n");day=31;break;
                    case 7: printf("July\n\n");day=31;break;
                    case 8: printf("August\n\n");day=31;break;
                    case 10: printf("October\n\n");day=31;break;
                    case 12: printf("December\n\n");day=31;break;
                    case 2:
                        printf("February\n\n");
                        if((year % 400 == 0)||(year % 4 ==0 && year % 100 !=0))
                            day=29;
                        else
                            day=28;
                        break;
                    case 4:printf("April\n\n");day = 30;break;
                    case 6:printf("June\n\n");day = 30;break;
                    case 9:printf("September\n\n");day = 30;break;
                    case 11:printf("November\n\n");day = 30;break;
                }
                printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                if(firstday==0){
                    for(date=1;date<=6;date++){
                        printf("     ");}
                    for(date=1;date<=day;date++){
                        printf("%5d",date);
                        if((firstday+date-1)%7==0)
                            printf("\n");}}
                else{
                    for(date=1;date<=(firstday-1);date++){
                        printf("     ");}
                    for(date=1;date<=day;date++){
                        printf("%5d",date);
                        if((firstday+date-1)%7==0)
                            printf("\n");}}
                    firstday=(firstday+day)%7;
                    printf("\n\n");
            }
    }
    else{
            thismonth=atoi(argv[2]);
            for(year=1899;year<thisyear;year++){
                if((year % 400 == 0)||(year % 4 ==0 && year % 100 !=0))
                    day=366;
                else
                    day=365;
                firstday=(firstday+day)%7;
                }
            for(month=1;month<=12;month++){
                switch(month){
                    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
                        day=31;break;
                    case 2:
                        if((year % 400 == 0)||(year % 4 ==0 && year % 100 !=0))
                            day=29;
                        else
                            day=28;
                        break;
                    case 4:case 6:case 9:case 11:
                        day=30;break;
                    }
                if(month==thismonth){
                switch(month){
                case 1:printf("January\n\n");break;
                case 2:printf("February\n\n");break;
                case 3:printf("March\n\n");break;
                case 4:printf("April\n\n");break;
                case 5:printf("May\n\n");break;
                case 6:printf("June\n\n");break;
                case 7:printf("July\n\n");break;
                case 8:printf("August\n\n");break;
                case 9:printf("September\n\n");break;
                case 10:printf("October\n\n");break;
                case 11:printf("November\n\n");break;
                case 12:printf("December\n\n");break;
                }
                printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
                    if(firstday==0){
                    for(date=1;date<=6;date++){
                        printf("     ");}
                    for(date=1;date<=day;date++){
                        printf("%5d",date);
                        if((firstday+date-1)%7==0)
                            printf("\n");}}
                    else{
                    for(date=1;date<=(firstday-1);date++){
                        printf("     ");}
                    for(date=1;date<=day;date++){
                        printf("%5d",date);
                        if((firstday+date-1)%7==0)
                            printf("\n");}}
                }
                firstday=(firstday+day)%7;
            }
            printf("\n");
    }
}
