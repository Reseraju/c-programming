/**********************************
 * File            :  passByValueRef.c
 * Description     :  c program to swp two numbers using pass by value and pass by reference method.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  6/9/2021
 * ********************************/
#include<stdio.h>
// pass by value
void swap(int number1,int number2){
    int temp;
    printf("\nthe number before swap");
    printf("\nnumber1 = %d\tnumber2 = %d",number1,number2);
    temp=number1;
    number1=number2;
    number2=temp;
    printf("\nnumbers after swap:");
    printf("\nnumber1 = %d\tnumber2 = %d",number1,number2);
}
//pass by reference
void swapRef(int* number1,int* number2){
    int temp;
    temp = *number2;
    *number2=*number1;
    *number1=temp;
    printf("\nnumber1 = %d\tnumber2 =%d",*number1,*number2);
}

int main(){
    void swap(int,int);
    void swapRef(int*,int*);
    int number1,number2;
    printf("enter number 1 : ");
    scanf("%d",&number1);
    printf("enter the number2 : ");
    scanf("%d",&number2);   
    swap(number1,number2);
    printf("\nnumbers after swap by reference");
    swapRef(&number1,&number2);
    
    return 0;
}
