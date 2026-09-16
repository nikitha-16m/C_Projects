#include <stdio.h>
int main(){
    int num;
    printf("enter a number to find its factorial:");
    scanf("%d",&num);
    int n=1;
    while(num>0){
        n=n*num;
        num-=1;
    }
    printf("%d",n);
    return 0;
}