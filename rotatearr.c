#include <stdio.h>
int main(){
    int arr[6];
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(i=0;i<len;i++){
        printf("enter the element:");
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter the no of times to rotate the array:");
    scanf("%d",&k);
    if(k>len){
        k%=len;
    }
    int temp;
    int rev(int arr[6],int n,int p){
        while(n<p){
            temp=arr[n];
            arr[n]=arr[p];
            arr[p]=temp;
            n++;
            p--;
        }
    }
    rev(arr,0,k-1);
    rev(arr,k,len-1);
    rev(arr,0,len-1);
    int a;
    for(a=0;a<len;a++){
        printf("%d",arr[a]);
    }
    return 0;
}