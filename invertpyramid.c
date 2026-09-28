#include <stdio.h>
int main(){
    for(int i=9;i>0;i--){
        for(int k=7;k>=i;k=k-2){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}