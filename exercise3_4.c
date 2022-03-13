/**********************************
 * File            :  exercise 3.4
 * Description     :  c program to count the frequency of each element of an array.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  30/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int num,i,j,array[20],count;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&num);
    printf("Input %d elements in an array :\n",num);
    for(i=0;i<num;i++){
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
    }
    printf("\nThe frequency of all elements of an array :");
    for(i=0;i<num;i++){
        count=1;
        for(j=0;j<num+1;j++){
            if(i!=j){
                if(array[i]==array[j]){
                    count++;
                }
            }
        }    
        printf("\n%d occures %d times ",array[i],count);
    }
    return 0;
}