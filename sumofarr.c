#include <stdio.h>
int main(){
    int arr[5];
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(j=0;j<len;j++){
        printf("enter the element:");
        scanf("%d",&arr[j]);
    }
    int sum=0;
    for(i=0;i<len;i++){
        sum+=arr[i];
    }
    printf("the sum of elements of array is : %d",sum);
    return 0;
}