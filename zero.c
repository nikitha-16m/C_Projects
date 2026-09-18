#include <stdio.h>
int main(){
    int arr[5];
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j,k,p;
    int ori=len;
    for(j=0;j<len;j++){
        printf("enter the element:");
        scanf("%d",&arr[j]);}
    for(i=0;i<len;i++){
        if(arr[i]==0){
            for(p=i;p<len-1;p++){
                arr[p]=arr[p+1];
            }
            arr[len-1]=0;
            len--;
            i--;
        }
    }
    for(k=0;k<ori;k++){
        printf("%d",arr[k]);
    }
    return 0;
}