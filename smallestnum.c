#include <stdio.h>
int main(){
    int num;
    printf("enter a number :");
    scanf("%d",&num);
    int smallest=9;
    while(num!=0){
        int a=num%10;
        if(a<smallest){
            smallest=a;
        }
        num/=10;
    }
    printf("the smallest digit of given number is %d ",smallest);
    return 0;
}