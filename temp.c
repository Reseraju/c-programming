#include<stdio.h>
int main(){
    int i,num1,num2,j;
    printf("enter the first number : ");
    scanf("%d",&num1);
    printf("enter the second number : ");
    scanf("%d",&num2);
    for(i=num1;i<=num2;i++){
        if(num1==1){
            num1=num1+1;
        }
        for(j=2;j<=i/2;j++){
           if (i%j!=0 && j>i/2){
               printf("%d",i);
           }
           
          
        }
    }
    return 0;
}
