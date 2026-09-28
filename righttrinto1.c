#include <stdio.h>
int main(){
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}