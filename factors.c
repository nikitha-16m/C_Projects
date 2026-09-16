#include <stdio.h>
int main(){
    int num;
    printf("enter number to find no of factors:");
    scanf("%d",&num);
    int i;
    int sum=0;
    for(i=1;i<=num;i++){
        if(num%i==0){
            sum+=1;
        }
    }
    printf("the no of factors are :%d",sum);
    return 0;
}