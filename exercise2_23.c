/**********************************
 * File            :  exercise 2.23
 * Description     :  c program to print prime numbers within a range of numbers
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  7/8/2021
 * *********************************/
#include<stdio.h>
int isPrime(n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int i,num1,num2;
    printf("enter the first number : ");
    scanf("%d",&num1);
    printf("enter the second number : ");
    scanf("%d",&num2);
    if(num1==1){
        num1=num1+1;
    }
    for(i=num1;i<=num2;i++){
        if(isPrime(i)){
            printf("%d\t",i);
        }
    }
    return 0;
}