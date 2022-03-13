/**********************************
 * File            :  pointer.c
 * Description     :  c program to demonstrate pointers
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  17/8/2021
 * *********************************/
#include<stdio.h>
int main(){
    int *ptr,number;
    number=22;
    printf("\nAddress of number :%d",&number);
    printf("\nValue of number : %d",number);
    ptr=&number;
    printf("\nAddress of pointer *ptr :%d",ptr);
    printf("\nValue of pointer *ptr : %d",*ptr);
    *ptr=100;
    printf("\nAddress of pointer *ptr :%d",ptr);
    printf("\nValue of pointer *ptr : %d",*ptr);
    return 0;
}