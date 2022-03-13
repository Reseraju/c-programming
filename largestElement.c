/**********************************
 * File            :  largestElement.c
 * Description     :  c program to find largest element using one dimensional array.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  9/9/2021
 * ********************************/
#include<stdio.h>
int size;
void readarray(int array[]){
    int i; 
    printf("\nEnter the elements of the array : ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
}
void printarray(int array[]){
    int i;
    printf("\nThe array elements are : ");
    for(i=0;i<size;i++){
        printf("%d\t",array[i]);
    }
}
int largestElement(int array[]){
    int i,largest;
    largest=array[0];
    for(i=0;i<size;i++){
        if(array[i]>largest){
            largest= array[i];
        }
    }
    return largest;
    //printf("\nThe largest element is : %d",largest);
}

void readarray(int array[size]);
void printarray(int array[size]);
int largestElememt(int array[size]);
int main(){
    int array[20];
    printf("\nEnter the size of the array : ");
    scanf("%d",&size);
    readarray(array);
    printarray(array);
    printf("\nThe largest element is :%d ",largestElement(array));
    
    return 0;
}
