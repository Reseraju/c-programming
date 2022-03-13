/**********************************
 * File            :  exercise 2.25
 * Description     :  c program to display the cube of the numbers upto a given integer number 
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  8/8/2021
 * *********************************/
#include<stdio.h>
int main(){
    int i,num,cube;
    printf("enter an integer number upto which the cube is to be printed : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        cube=i*i*i;
        printf("Number is : %d and cube of %d is : %d\n",i,i,cube);
    }
    return 0;
}
