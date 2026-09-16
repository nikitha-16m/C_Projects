#include <stdio.h>
int main(){
    int num;
    printf("enter number to find no of factors:");
    scanf("%d",&num);
    int i;
    int sum=0;
    int sum1=0;
    for(i=1;i<=num;i++){
        if(num%i==0){
            sum+=1;
            sum1+=i;
        }
    }
    printf("the no of factors are :%d\n",sum);
    printf("the sum of the factors are :%d",sum1);
    return 0;
}