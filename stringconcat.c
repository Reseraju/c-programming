/**********************************
 * File            :  string Length
 * Description     :  c program to find the length of the string.
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  31/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    char sourceString[20],destinationString[20];
    int i,j;
    printf("enter the first string : ");
    gets(destinationString);
    printf("enter the second string : ");
    gets(sourceString);

    //by using loops
    //to find the end of the string
    for(i=0;destinationString[i]!='\0';i++);
    destinationString[i++]=' ';
    for(j=0;sourceString[j]!='\0';j++){
        destinationString[i++]=sourceString[j];
    }
    destinationString[i]='\0';
    printf("the concatenated string is :");
    puts(destinationString);

    //byusing built-in function
    //strcat(destinationString,sourceString);
    //printf("the concatenated string is : ");
    //puts(destinationString);
}