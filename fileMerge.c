#include<stdio.h>
int main(){
    FILE *fr,*fw;
    char ch;
    fw=fopen("file1.txt","w");
    fr=fopen("file2.txt","r");
    while(!feof(fr)){
        ch=getc(fr);
        //printf("%c",ch);
        putc(ch,fw);
    }
    putc('\n',fw);
    fclose(fr);
    fr=fopen("file2.txt","r");
     while(!feof(fr)){
        ch=getc(fr);
        //printf("%c",ch);
        putc(ch,fw);
    }
    fclose(fr);
    fclose(fw);
    fr=fopen("file1.txt","r");
    while(!feof(fr)){
        ch=getc(fr);
        printf("%c",ch);
        //putc(ch,fw);
    }

    return 0;
}