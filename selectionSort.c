/**********************************
 * File            :  selectionSort.c
 * Description     :  c program to sort an array using selection sort
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  23/11/2021
 * ********************************/
#include<stdio.h>
int main(){
     int i,j,a[20],n,min,temp;
     printf("enter the size of the array : ");
     scanf("%d",&n);
     printf("enter the elements of the array : ");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     //selection sort
     for(i=0;i<n;i++){
         min=i;
         j=i+1;
         for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
         }
         temp=a[i];
         a[i]=a[min];
         a[min]=temp;
     }
     printf("the sorted array is :");
     for(i=0;i<n;i++){
         printf("%d ",a[i]);
     }

    return 0;
}