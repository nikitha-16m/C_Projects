#include <stdio.h>
int main(){
    int i;
    printf("enter no of rows:");
    scanf("%d",&i);
    for(int j=1;j<=i;j++){
        for(int k=1;k<=j;k++){
            printf("*");
        }
        printf("\n");
    }
}