#include<stdio.h>
int main(){
    int x,n,ans=1;
    printf("Enter the base and exponent:");
    scanf("%d%d",&x,&n);
    while(n>0){
        ans=ans*x;
        n=n-1;
    }
    printf("Result = %d",ans);
    return 0;
}