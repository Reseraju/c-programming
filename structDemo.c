/**********************************
 * File            :  2DArray.c
 * Description     :  c program to demonstrate passing 2D array to a function
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  13/9/2021
 * ********************************/
#include<stdio.h>
typedef struct{
    int rollno;
    char name[30];
    char branch[20];
}student;
typedef union{
    int rollno;
    char name[30];
    char branch[20];
}studentUnion;
int main(){
    student s1;
    studentUnion s2;
    printf("\nthe size of the structure : %d",sizeof(s1));
    printf("\nthe size of the union : %d",sizeof(s2));
    s2.rollno = 20;
    printf("\nin structure");
    strcpy(s1.name,"Reese");
    printf("roll number: ");
    scanf("%d",&s1.rollno);
    printf("\n%d",s1.rollno);
    printf("\n%s",s1.name);
    
    return 0;
}