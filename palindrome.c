#include <stdio.h>
int main(){
    int num;
    printf("enter to check palindrome:");
    scanf("%d",&num);
    int rev=0;
    int ori=num;
    while(num>0){
        int a=num%10;
        rev=rev*10+a;
        num=num/10;
    }
    if(ori==rev){
        printf("your number is palindrome");
    }
    else{
        printf("not a palindrome number");
    }
    return 0;
}