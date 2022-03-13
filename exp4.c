/**********************************
 * File            :  experiment 4
 * Description     :  c program C to read 3 integer values and find the largest among them.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  11/9/2021
 * ********************************/
#include<stdio.h>
int main(){
    int firstNo,secondNo,thirdNo,largest,highest;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&firstNo,&secondNo,&thirdNo);
    highest=firstNo>secondNo?firstNo:secondNo;
    largest=highest>thirdNo?highest:thirdNo;
    printf("\nThe largest number is : %d",largest);
    return 0;
}