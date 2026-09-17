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
    int second=arr[0];
    for(i=0;i<len;i++){
        if(arr[i]>largest){
             second=largest;
             largest=arr[i];
        }
        else if(arr[i]>second && arr[i]!=largest){
            second=arr[i];
        }
    }
    printf("the second largest element of array is:%d",second);
    return 0;
}