#include <stdio.h>
int main(){
    int num;
    printf("enter a decimal number:");
    scanf("%d",&num);;
    int bin=0;
    int place=1;
    while(num!=0){
        int a=num%2;
        bin=bin+a*place;
        place=place*10;
        num/=2;
    }
    printf("the binary number of given number is : %d",bin);
    return 0;
}