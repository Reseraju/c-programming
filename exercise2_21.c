/**********************************
 * File            :  exercise 2.21
 * Description     :  c program to find the number and sum of all integer between 100 and 200 divisible by 9
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  8/8/2021
 * *********************************/
#include<stdio.h>
int main(){
    int num,sum=0,i;
    printf("Numbers between 100 and 200 divisible by 9 :\n");
    for(i=100;i<200;i++){
        if(i%9==0){
            printf("%d\t",i);
            sum+=i;
        }
    }
    printf("\nThe sum is : %d",sum);
    return 0;
}