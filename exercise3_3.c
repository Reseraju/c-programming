/**********************************
 * File            :  exercise 3.3
 * Description     :  c program C to print all unique elements in an array.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  29/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int i,j,num,array[20],count;
    printf("\tPrint all unique elements of an array:");
    printf("\n----------------------------------------------------");
    printf("\nInput the number of elements to be stored in the array : ");
    scanf("%d",&num);
    printf("Input %d elements in the array :\n",num);
    for(i=0;i<num;i++){
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("The unique elements found in the array are :");
    for(i=0;i<num;i++){
        count=0;
        for(j=0;j<num+1;j++){
            if(i!=j){
                //increment the count when value is duplicate
                if(array[i]==array[j]){
                    count++;
                }
            }
        }
        if(count==0){
            printf("%d\t",array[i]);
        }
    }
    return 0;
}