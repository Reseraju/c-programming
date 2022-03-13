/**********************************
 * File            :  exercise 2.28
 * Description     :  c program to display LCM and HCF of two numbers
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  14/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int firstNumber,secondNumber,i,HCF,max,LCM;
    printf("enter the first number : ");
    scanf("%d",&firstNumber);
    printf("enter the second number : ");
    scanf("%d",&secondNumber);
    if(firstNumber>secondNumber){
        max=firstNumber;
    }
    else{
        max=secondNumber;
    }
    for(i=1;i<=max;i++){
        if(firstNumber%i==0 && secondNumber%i==0){
            HCF=i;
        }
         
    }
    LCM=(firstNumber*secondNumber)/HCF;
    printf("the LCM is %d ",LCM);
    printf("\nthe HCF is %d",HCF);
    return 0;
}