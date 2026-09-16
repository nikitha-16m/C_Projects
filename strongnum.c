#include <stdio.h>
int main(){
    int num;
    printf("enter a number to find strong or not:");
    scanf("%d",&num);
    int original=num;
    int i;
    int sum=0;
    while(num!=0){
        int a=num%10;
        int mul=1;
        for(i=1;i<=a;i++){
            mul=mul*i;
        }
        sum+=mul;
        num/=10;
    }
    if(original==sum){
        printf("your number is a strong number");
    }
    else{
        printf("your number is not a strong number");
    }
    return 0;
}