#include <stdio.h>
int main(){
    int num;
    printf("enter a nmber to count the digits :\n");
    scanf("%d",&num);
    int sum=0;
    while(num!=0){
        sum++;
        num/=10;
    }
    printf("the number od digits are: %d",sum);
    return 0;
}