#include <stdio.h>
int main(){
    int num;
    printf("enter a number:\n");
    scanf("%d",&num);
    int evensum=0;
    int oddsum=0;
    while(num!=0){
        int a=num%10;
        if(a%2==0){
            evensum+=a;
        }
        else{
            oddsum+=a;
        }
        num=num/10;
    }
    printf("the sum of even numbers is :%d\nthe sum of odd numbers is :%d",evensum,oddsum);
    return 0;
}