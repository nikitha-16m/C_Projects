#include <stdio.h>
int main(){
    int num;
    printf("enter a number to find the sum of its digits:");
    scanf("%d",&num);
    int sum=0;
    while(num>0){
        int a=num%10;
        sum+=a;
        num=num/10;
    }
    printf("the sum of digits of the number is %d",sum);
    return 0;
}