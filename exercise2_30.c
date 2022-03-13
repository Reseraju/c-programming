/**********************************
 * File            :  exercise 2.30
 * Description     :  c program to print diamond star pattern 
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  9/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int input,i,j;
    printf("Input: ");
    scanf("%d",&input);
    //for printing first half of diamond
    for(i=1;i<=input;i++){
        //print blank space
        for(j=input-i;j>=1;j--){
            printf(" ");
        }
        //print 1st half triangle
        for(j=input;j>input-i;j--){
            printf("*");
        }
        //print second half triangle
        for(j=i-1;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }

    //for printing second half of diamond
    for(i=1;i<=input-1;i++){
        //print blank space
        for(j=i;j>=1;j--){
            printf(" ");
        }
        //print 1st half triangle
        for(j=i;j<=input-1;j++){
            printf("*");
        }
        //print second half triangle
        for(j=1;j<=input-1-i;j++){
            printf("*");
        }    
        printf("\n");

    }
}