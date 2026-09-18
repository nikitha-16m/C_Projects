#include <stdio.h>
int main(){
    int num;
    printf("enter a number from 1 to 26:");
    scanf("%d",&num);
    int value=97;
    int i;
    for(i=1;i<=num;i++){
        printf("%c",value);
        value+=1;
    }
    return 0;
}