#include <stdio.h>
int main(){
    int num,digit;
    printf("enter a number:");
    scanf("%d",&num);
    printf("enter digits to find its occurance:");
    scanf("%d",&digit);
    int sum=0;
    while(num!=0){
        int a=num%10;
        if(digit==a){
            sum++;
        }
        num/=10;
    }
    printf("your digit occured %d times",sum);
    return 0;
}