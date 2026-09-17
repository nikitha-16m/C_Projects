#include <stdio.h>
int main(){
    int arr[5];
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(j=0;j<len;j++){
        printf("enter the element:");
        scanf("%d",&arr[j]);
    }
    int smallest=arr[0];
    int second=arr[0];
    for(i=1;i<len;i++){
        if(arr[i]<smallest){
             second=smallest;
             smallest=arr[i];
        }
        else if(arr[i]<second && arr[i]!=smallest){
            second=arr[i];
        }
    }
    printf("the second smallest element of array : %d",smallest);
}