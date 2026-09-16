#include <stdio.h>
int main(){
    int a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    int i;
    int largest=a;
    int gdc=0;
    if(b>a){
        largest=b;
    }
    for(i=1;i<largest;i++){
        if(a%i==0&&b%i==0){
            gdc=i;
        }
        else{
            continue;
        }
    }
    printf("the greatest common divisor of both numbers is %d",gdc);
    return 0;
}