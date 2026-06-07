#include<stdio.h>
int sumofdigits(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10)+sumofdigits(n/10);
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d",n,sumofdigits(n));
    return 0;
}
