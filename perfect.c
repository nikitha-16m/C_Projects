#include <stdio.h>
int main(){
    int num;
    printf("enter a number to check perfect or not:");
    scanf("%d",&num);
    int i;
    int sum=0;
    for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(num==sum){
        printf("your number is a perfect number");
    }
    else{
        printf("not a perfect number");
    }
    return 0;
}