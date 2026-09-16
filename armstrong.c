#include <stdio.h>
int main(){
    int num;
    printf("enter number to check armstrong or not:");
    scanf("%d",&num);
    int original=num;
    int sum=0;
    while(num>0){
        int a=num%10;
        a=a*a*a;
        sum=sum+a;
        num/=10;
    }
    if(original==sum){
        printf(" given number is a armstrong number");
    }
    else{
        printf("not a armstrong");
    }
    return 0;
}