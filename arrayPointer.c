/**********************************
 * File            :  pointer.c
 * Description     :  c program to demonstrate pointers and array
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  17/8/2021
 * *********************************/
#include<stdio.h>
int main(){
    int array[4];
    int i;
    for(i=0;i<4;i++){
        printf("\n&array[%d]=%d",i,&array[i]);
    }
    printf("\nthe starting address of array = %d",array);
    for(i=0;i<4;i++){
        printf("\n&array[%d]=%d",i,array+i);
    }
    printf("\nenter four elements :");
    for(i=0;i<4;i++){
        scanf("%d",i,&array[i]);
    }
     printf("\nenter four elements :");
    for(i=0;i<4;i++){
        scanf("%d",i,&array[i]);
    
    return 0;
}