#include <stdio.h>
int main(){
    int num;
    printf("enter a number to fet reversed:");
    scanf("%d",&num);
    int reverse=0;
    while(num>0){
        int a=num%10;
        reverse=(reverse*10)+a;
        num=num/10;
    }
    printf("the reversed number is: %d",reverse);
    return 0;
}