#include <stdio.h>
int main(){
    int y;
    int x;
    int n;
    printf("enter the lastnumber or lastrow number for series pattern:");
    scanf("%d",&x);

    int num=1;
    if(x>100){
        printf("please enter a number less than 100:");
       scanf("%d",&y); 
       n=y;
    }
    else{
        n=x;
    }
{

    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
        }
        num++;
        printf("\n");
    }
    return 0;
}
}