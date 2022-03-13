/**********************************
 * File            :  exercise 2.27
 * Description     :  c program to read a Decimal number from the user and convert it into an Octal Number.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  23/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int decimalNum,place=1,octal=0,remainder=0;
    printf("enter the decimal number to convert : ");
    scanf("%d",&decimalNum);
    while(decimalNum>0){
        remainder =  decimalNum%8;
        octal += remainder*place;
        decimalNum=decimalNum/8;
        place=place * 10;
    }
    printf("the octal number of decimal equivalent is : %d",octal);

    return 0;
}