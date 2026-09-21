#include <stdio.h>
int main(){
    int arr[6];
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j,k,l;
    for(i=0;i<len;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    for(j=0;j<len;j++){
        int a=arr[j];
        int count=0;
        for(k=0;k<len;k++){
            if( k!=j && a==arr[k]){
                count++;
            }
        }
        if(count==0){
                printf("%d",a);
                return 0;
    }
}
}