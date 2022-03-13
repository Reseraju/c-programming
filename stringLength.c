/**********************************
 * File            :  string Length
 * Description     :  c program to find the length of the string.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  31/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    char inputString[20];
    int count=0,i=0;
    printf("enter the string :");
    gets(inputString);
    while(inputString[i]!='\0'){
        count++;
        i++;
    }
    //for(i=0;inputString!=0;i++);   this is also correct
    printf("\nthe length of the string is (using strlen()) :%d ",strlen(inputString));
    printf("\nthe lenth of the string is : %d",count);
    
    return 0;
}