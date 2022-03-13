/**********************************
 * File            :  pointer.c
 * Description     :  c program to demonstrate pointers and array
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  17/8/2021
 * *********************************/
#include<stdio.h>
int main(){
    int *number1,*number2,*sum;
    printf("\n%d",number1);
    printf("\n%d",number2);
    printf("\nEnter 1 st number : ");
    scanf("%d",number1);
    printf("\nEnter 2 nd number :");
    scanf("%d",number2);
    printf("\nnumber1=%d",*number1);
    printf("\nnumber2=%d",*number2);
    *sum=*number1+*number2;
    printf("\nSum=%d",*sum);
    return 0;
}