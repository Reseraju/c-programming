/**********************************
 * File            :  exercise 2.22
 * Description     :  c program to print the pattern
 *                          1
 *                         121
 *                        12321 
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  4/8/2021
 * *********************************/
#include<stdio.h>
int main(){
    int limit,i,j;
    printf("enter the number of rows : ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=limit-i;j>=1;j--){
            printf(" ");
            
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
 
    return 0;

}