#include <stdio.h>
int main()
{
    int n;
    printf("enter the number upto where the letters are printed:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            printf(" ");
        }
        for(int k=(64+n);k>=(65+n-i);k--){
            printf("%c",k);
        }
        printf("\n");
        

    }
    return 0;}