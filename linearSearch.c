#include<stdio.h>
int main(){
    int a[10],i,s ,n ,count=1;
     int flag=0;
    count++;
    printf("\nEnter the number of element:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++){
        printf("\nElement[%d]:",i);
        scanf("%d",&a[i]);
        count++;
    }
    printf("\nEnter the element to be searched ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(a[i]==s){
            printf("\nSearch element %d found at position %d",s,i++);
            flag=1;
            count++;
            break;
        }
        count++;
    }
    
    if(flag==0){
        printf("\nSearch element is not  found ");
        count++;
    }
    printf("\nThe time complexity :%d",count+1);
    return 0;
}