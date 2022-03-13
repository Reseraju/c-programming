#include<stdio.h>
int main(){
    int number,remainder;
    printf("Enter the integer number:");
    scanf("%d",&number);
    while(number>0){
        //extract right most digit
        remainder = number %10;
        printf("%d",remainder);
        //remove the right most digit 
        number = number/10;

    }
    return 0;
}