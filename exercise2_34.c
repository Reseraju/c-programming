/**********************************
 * File            :  exercise 2.34
 * Description     :  c program to find sum of the series 1+11+111+...n terms
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  8/8/2021
 * ********************************/
#include<stdio.h>
#include<math.h>
int main(){
    int i,j=1,sum=0,num,tSum=0;
    printf("input the number of terms : ");
    scanf("%d",&num);
    while(j<=pow(10,num)){
        
        sum+=j;
        j=j*10;
        printf("%d \t",sum);
        tSum=tSum+sum;
            
    }
    printf("\nthe sum is : %d",tSum);

    return 0;
}