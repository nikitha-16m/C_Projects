#include <stdio.h>
int main(){
    int arr[5];
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    for(j=0;j<len;j++){
        printf("enter the element:");
        scanf("%d",&arr[j]);}
    int even=0,odd=0,evensum=0,oddsum=0;
    for(i=0;i<len;i++){
        int a=arr[i];
        if(a%2==0){
            even++;
            evensum=evensum+a;
        }
        else{
            odd++;
            oddsum+=a;
        }
    }
    printf("the no of even elements are : %d\n",even);
    printf("the sum of even elements ar : %d\n",evensum);
    printf("the no of odd elements are : %d\n",odd);
    printf("the sum of odd elements ar : %d\n",oddsum);
    return 0;
}