#include <stdio.h>
int main(){
    int arr[5];
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j,k,n;
    for(i=0;i<len;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    for(j=0;j<len;j++){
        int a=arr[j];
        for(k=j+1;k<len;k++){
            if(arr[k]==a){
                printf("%d\n",a);
                return 0;
            }
        }
    }
}