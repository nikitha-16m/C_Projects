#include <stdio.h>
int main(){
    int num;
    printf("enter the number to find its multiplication table:");
    scanf("%d",&num);
    int i;
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}