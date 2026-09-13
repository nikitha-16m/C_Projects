#include <stdio.h>
int main(){
    int a;
    printf("enter a number to find even or odd:");
    scanf("%d",&a);
    if(a%2==0){
        printf("your number is even");
    }
    else{
        printf("your number is odd");
    }
    return 0;
}