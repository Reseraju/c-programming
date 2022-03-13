/**********************************
 * File            :  exercise 3.2
 * Description     :  c program C to count a total number of duplicate elements in an array.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  29/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int num,i,j=0,count=0,array[20];
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&num);
    printf("Input %d number of elements in the array :\n",num);
    for(i=0;i<num;i++){
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++)
        if(array[i]==array[j]){
            count++;
        }
        
  
    }
    printf("Total number of duplicate elements found in the array is : %d",count);


    return 0;
}