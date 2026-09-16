#include <stdio.h>
int main(){
    int num;
    printf("enter your number:");
    scanf("%d",&num);
    int sum=0;
    while(num!=0){
        sum+=num;
        num-=1;
    }
    printf("the sum of numbers from 1 to num are : %d",sum);
    return 0;
}