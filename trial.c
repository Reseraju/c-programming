#include<stdio.h>
int main(){
    FILE *fptr;
    char ch;
    int noofWords=0,noOfLines=0,noOfch=0;
    fptr=fopen("test.txt","r");
    while(!feof(fptr)){
        ch = getc(fptr);//read character from the file
        //printf("%c",ch);
        if(ch=='.'){
            noOfLines++;
            noofWords++;
            noOfch++;
        }
        else if(ch==' '){
            noOfch++;
        }
    }
    
    printf("no of lines : %d",noOfLines);
    printf("no of words : %d",noofWords);
    printf("no of characters : %d",noOfch);
        
    
    return 0;
}