/**********************************
 * File            :  experiment 5
 * Description     :  c program to read a Natural Number and check whether the number is prime or not.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  11/9/2021
 * ********************************/
#include<stdio.h>
int isPrime(int n){
    int i,flag;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
        }
        else{
            flag=0;
        }
    }
    if(flag==0){
        printf("prime number");
    }
    else{
        printf("not a prime number");
    }
}
int isPrime(int);
int main(){
    int num;
    printf("Enter any natural number : ");
    scanf("%d",&num);
    isPrime(num);
    return 0;
}