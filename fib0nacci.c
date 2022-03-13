#include<stdio.h>
int main(){
    int firstNumber=0, secondNumber=1, thirdNumber=0,i;
    int maxLimit;
    printf("Enter the limit of Fibonacci numbers that is going to generate:");
    scanf("%d",&maxLimit);
    for(i=0;i<maxLimit;i++){
        printf("%d\t",thirdNumber);
        firstNumber = secondNumber;
        secondNumber = thirdNumber;
        thirdNumber = firstNumber + secondNumber;
    }

    return 0;
}