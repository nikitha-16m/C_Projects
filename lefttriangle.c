#include <stdio.h>
int main(){
    int i;
    /* example pattern:
    *****
    ****
    *** 
    **
    *
    */
    printf("enter no of rows");
    scanf("%d",&i);
    for(i;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}