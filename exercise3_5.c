/**********************************
 * File            :  exercise 3.5
 * Description     :  c program to find the maximum and minimum element in an array.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  30/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int num,i,j,max,min,array[20];
    printf("Input the number of elements to be stored in the array ");
    scanf("%d",&num);
    printf("Input %d elements in the array :",num);
    for(i=0;i<num;i++){
        printf("element - %d :",i);
        scanf("%d",&array[i]);
    }
    min=max=array[0];
    for(i=1;i<num;i++){
        if(min>array[i]){
            
        }
    }
    printf("\nmaximum : %d",max);
    printf("\nminimum : %d",min);

    return 0;
}