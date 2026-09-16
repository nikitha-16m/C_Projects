#include <stdio.h>
int main(){
    int base,power;
    printf("enter the base value:\n");
    scanf("%d",&base);
    printf("enter the power value:\n");
    scanf("%d",&power);
    int mul=1;
    int i;
    for(i=1;i<=power;i++){
        mul=mul*base;
    }
    printf("the value is : %d",mul);
    return 0;
}