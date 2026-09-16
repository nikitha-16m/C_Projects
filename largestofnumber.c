#include <stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    int largest=0;
    while(num!=0){
        int a=num%10;;
        if(a>largest){
            largest=a;
        }
        num/=10;
    }
    printf("the largest of number:%d",largest);
    return 0;
}