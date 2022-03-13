/**********************************
 * File            :  exercise 2.26
 * Description     :  c program to to read a binary number from user and
 *                    convert it into decimal
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  8/8/2021
 * *********************************/
#include<stdio.h>
#include<math.h>
int main(){
    int i,j,num,temp,sum=0,rem;
    printf("enter the binary number : ");
    scanf("%d",&num);
    temp=num;
    for(i=0;num!=0;i++){
        rem=num%10;
        sum+=rem*pow(2,i);
        num=num/10;
    }
    printf("the binary number is : %d \n",temp);
    printf("the equivqlent decimal number is : %d",sum);
    return 0;
}