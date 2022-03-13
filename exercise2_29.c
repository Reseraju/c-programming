/**********************************
 * File            :  exercise 2.29
 * Description     :  c program to check the given number is a Perfect Number or Not.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  23/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int num,sum=0,i,flag;
    printf("enter the number : ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
            if(sum==num){
                flag=0;
            }
            else{
                flag=1;
            }
        }    

    }
    if(flag==0){
        printf("the number %d is a perfect number",num);
    }
    else{
        printf("the number %d is not a perfect number",num);
    }

    
    return 0;
}