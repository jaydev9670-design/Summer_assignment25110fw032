#include<stdio.h>
int main(){
    int n,a=0,b=1,temp;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d",a);
        temp=a+b;
        a=b;
        b=temp;
    }
    return 0;
}