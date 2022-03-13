/**********************************
 * File            :  2DArray.c
 * Description     :  c program to demonstrate passing 2D array to a function
 * Author          :  Rese Raju
 * Version         :  1.0
 * Date            :  13/9/2021
 * ********************************/
#include<stdio.h>
void readArray(int [][5],int,int);
void printArray(int [][5],int,int);
void addMatrix(int [][5],int [][5],int [][5],int,int);
int main(){ 
    int row,col;
    int firstMatrix[5][5],secondMatrix[5][5],sumMatrix[5][5];
    printf("\nEnter the number of rows and columns of first matrix(maximum 5) : ");
    scanf("%d%d",&row,&col);
    readArray(firstMatrix,row,col);
    readArray(secondMatrix,row,col);
    printArray(firstMatrix,row,col);
    printArray(secondMatrix,row,col);
    addMatrix(firstMatrix,secondMatrix,sumMatrix,row,col);
    printf("\nThe result is : \n");
    printArray(sumMatrix,row,col);
    return 0;
}
void readArray(int matrix[][5],int row,int col){
    int i,j;
    printf("enter the elements of the matrix :\n ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("\nEnter row[%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}    
void printArray(int matrix[][5],int row,int col){
    int i,j;
    printf("the matrix is :\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
void addMatrix(int firstMatrix[][5],int secondMatrix[][5],int sumMatrix[][5],int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            sumMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}


