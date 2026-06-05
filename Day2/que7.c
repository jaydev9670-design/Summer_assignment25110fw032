#include<stdio.h>
int main(){
    int n,prod=1,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0){
        temp=n%10;
        prod=prod*temp;
        n=n/10;
    }
    printf("Product of digits: %d", prod);
    return 0;
}