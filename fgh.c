#include<stdio.h>
int main(){
    int limit,i,j;
    printf("\nEnter the limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(j=1;j<=i;j++){
            printf("*\t");
        }//end j
        printf("\n");
    }//end i
    

    return 0;
}