#include <stdio.h>
int main(){
    int num;
    printf("enter a number to find it is prime or not:");
    scanf("%d",&num);
    int i;
    int sum=0;
    for(i=2;i<num;i++){
        if(num%i==0){
            sum++;
            break;
        }
    }
    if(sum==0){
        printf("your number is prime");
    }
    else{
        printf("your number is not prime");
    }
    return 0;
}