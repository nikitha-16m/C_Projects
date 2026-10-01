#include <stdio.h>
int mul(int k);
int main(){
    int n;
    printf("enter a number to find factorial:");
    scanf("%d",&n);
    int res=mul(n);
    printf("%d",res);
}
int mul(int k){
    if(k>=1){
        return k*mul(k-1);
    }
    else{
        return 1;
    }
}