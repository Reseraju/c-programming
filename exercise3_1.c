/**********************************
 * File            :  exercise 3.1
 * Description     :  c program C to read n number of values in an array and display it in reverse order.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  29/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int i,num,array[20];
    printf("Input the number of elements to store in the array : ");
    scanf("%d",&num);
    printf("Input %d number of elements in the array :\n",num);
    for(i=0;i<num;i++){
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("The values store in the array are :\n");
    for(i=0;i<num;i++){
        printf("%d\t",array[i]);
    }
    printf("\nThe values store into the array in reverse are :\n ");
    for(i=num-1;i>=0;i--){
        printf("%d\t",array[i]);
    }
    return 0;
}