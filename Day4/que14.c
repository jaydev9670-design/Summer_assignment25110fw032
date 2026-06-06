#include<stdio.h>
int main(){
    int n ,a=0,b=1,temp;
    printf("Enter the nth term:");
    scanf("%d",&n);
    if(n==1)
    printf("nth fibonacci term =%d",a);
    else if(n==2)
    printf("nth fibonacci term =%d",b);
    else{
        for(int i=3;i<=n;i++){
            temp=a+b;
            a=b;
            b=temp;
        }
        printf("nth fibonacci term =%d",b);
    }
    return 0;
}