#include<stdio.h>
int main() {
    int arr[10],n,l,h,position=-1,mid,val,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array (in ascending order):");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("\nThe array is:");
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the element to be searched:");
    scanf("%d",&val);
    l=0;
    h=n-1;
    while(l<=h) {
        mid=(l+h)/2;
        if(arr[mid]==val) {
            position=mid;
            printf("Position of the value is:%d",position);
            break;
        }
        else if(arr[mid]>val) {
            h=mid-1;
         }
         else {
             l=mid+1;
         }
    }
    if(position==-1) {
        printf("Value not present");
    }
    return 0;
}