#include <stdio.h>
int main(){
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    int even=0,odd=0;
    while(num!=0){
        int a=num%10;
        if(a%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
        num=num/10;
    }
    printf("%d even numbers and %d odd numbers are present in your number:",even,odd);
    return 0;
}