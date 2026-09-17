#include <stdio.h>
int main(){
    int arr[5];
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(j=0;j<len;j++){
        printf("enter the element:");
        scanf("%d",&arr[j]);
    }
    for(i=0;i<len;i++){
        printf("the %d of the array is: %d\n",i+1,arr[i]);
    }
    return 0;
}