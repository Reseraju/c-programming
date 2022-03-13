/**********************************
 * File            :  exercise 2.38
 * Description     :  c program that generates a random number and asks the user to guess what the number is.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  23/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    int guess,trial,num;
    srand(time(0));
    num=rand()%100+1;
   
    do{
        printf("enter a guess between 1 and 100 : ");
        scanf("%d",&guess);
        if(guess>num){
        printf("too high!try again\n");
        }
        else if(guess<num){
        printf("too low!try again\n");
        }
        else{
        printf("correct! Hoo Hoo");
        }
    }while(num!=guess);
    return 0;
}