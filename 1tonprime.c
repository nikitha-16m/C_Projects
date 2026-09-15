#include <stdio.h>
int main(){
    int num;
    printf("enter a number to find prime number upto:");
    scanf("%d",&num);
    int i,j,sum;
    for(i=2;i<=num;i++){
        sum=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                sum++;
                break;
            }
        }
        if(sum==0){
            printf("%d\n",i);
        }
    }
    return 0;
}