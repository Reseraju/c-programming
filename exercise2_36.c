/**********************************
 * File            :  exercise 2.28
 * Description     :  c program to display LCM and HCF of two numbers
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  14/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int totalDays,num,startDate,i,j,k,count=0;
    printf("Enter total number of days in a month : ");
    scanf("%d",&totalDays);
    printf("Enter the first day in a month : ");
    printf("enter the first day from \n<0-Monday\n1-Tuesday\n2-Wednesday\n3-Thursday\n4-Friday\n5-Saturday\n6-Sunday :\n");
    scanf("%d",&startDate);
    switch (startDate){
       case 0:
       printf("Monday");
       break;
       case 1:
       printf("Tuesday");
       break;
       case 2:
       printf("Wednesday");
       break;
       case 3:
       printf("Thursday");
       break;
       case 4:
       printf("Friday");
       break;
       case 5:
       printf("Saturday");
       break;
       case 6:
       printf("Sunday");
       break;
       default:
       printf("invalid choice");
       break;
    }
    printf("\nMon\tTue\tWed\tThur\tFri\tSat\tSun");
    printf("\n_____________________________________________________");
    /*for(i=0;i<5;i++){
        for(j<0;j<startDate;j++){
            printf("\t");
        }
        for(k=1;k<=totalDays;k++){
            for(j=startDate;j<=6;j++){
                printf("%d\t",k);
                if(j>6){
                    j=0;
                }
            }


            
        }
    }*/

    return 0;
    
}
