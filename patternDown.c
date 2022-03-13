#include<stdio.h>
int main(){
    int limit,i,j;
    printf("enter the limit : ");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        for(j=0;j<=i;j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}