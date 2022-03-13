/**********************************
 * File            :  experiment 5
 * Description     :  c program to read a Natural Number and check whether the number is prime or not.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  11/9/2021
 * ********************************/
#include<stdio.h>
int main(){
    int num,flag=0,i;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            flag=1;
        }
    }
    if(flag==1){
        printf("The number is not prime");
    }
    else{
        printf("the number is prime");
    }
    return 0;
}