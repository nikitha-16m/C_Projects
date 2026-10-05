#include <stdio.h>
int main(){
    int n;
    printf("enter the no of elements to be displayed:");
    scanf("%d",&n);
    int a=0;
    int b=1;
    printf("%d\t%d\t",a,b);
    for(int i=0;i<(n-2);i++){
        int c;
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
    return 0;
}