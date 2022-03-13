/**********************************
 * File            :  exercise 2.32
 * Description     :  c program to print solid half diamond pattern pointing using stars
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  3/8/2021
 * *********************************/
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter the limit : ");
    scanf("%d",&n);
     
     //printing 1st n rows
    for(i=0;i<n;i++){    
        for(j=0;j<=i;j++){
            printf("*\t");
        }
        printf("\n");
    }
    //printing remaining n-1 rows
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}