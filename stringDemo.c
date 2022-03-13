/**********************************
 * File            :  string Demo
 * Description     :  c program to display difference between scanf and gets for reading string
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  30/8/2021
 * ********************************/
#include<stdio.h>
int main(){
    char my1starray[20],my2ndarray[20],my3rdarray[20];
    printf("enter the string : ");
    scanf("%s",my1starray);
    printf("\nthe string is : %s",my1starray);
    fflush(stdin);
    printf("\nenter the string : ");
    gets(my2ndarray);
    printf("\nthe string is : %s",my2ndarray);
    printf("\nenter the string : ");
    scanf("%[^\n]",my3rdarray);
    printf("\nthe string is : %s",my3rdarray);
    return 0;

}