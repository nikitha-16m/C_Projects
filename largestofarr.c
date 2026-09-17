#include <stdio.h>
int main(){
    int arr[5];
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(j=0;j<len;j++){
        printf("enter the element:");
        scanf("%d",&arr[j]);
    }
    int largest=arr[0];
    for(i=1;i<len;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("the largest element of array: %d",largest);
    return 0;
}