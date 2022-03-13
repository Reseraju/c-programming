/**********************************
 * File            :  exercise 2.37
 * Description     :  Suppose you are given 10 Rupees on day 1 and on day 2 you are given twice asmuch. If each day you are given twice as 
 *                    much money as on the previous day,then on day 15, how much money you will receive? Build a C program to find the solution.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  23/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int givenRupees,total,i,newRupee;
    printf("enter the rupees given in day 1 : ");
    scanf("%d",&givenRupees);
    total=givenRupees;

    for(i=2;i<=15;i++){
        total= total*2;

        printf("\nThe money you will recieve in day %d is :%d rupees ",i,total);
    }
    
    return 0;
}