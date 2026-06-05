#include<stdio.h>
int main(){
    int n,rev=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }
    printf("Reversed number: %d", rev);
    return 0;
}