#include<stdio.h>
int main(){
    FILE *fpt;
    int i,number;
    fpt=fopen("input.txt","w");
    for(i=0;i<10;i++){
        printf("enter the number : ");
        scanf("%d",&number);
        putw(number,fpt);
    }
    fclose(fpt);
    fpt=fopen("input.txt","r");
    number=getw(fpt);
    while(number!=-1){
        
        printf("%d ",number);
        number=getw(fpt);
    }
    fclose(fpt);
    return 0;
}