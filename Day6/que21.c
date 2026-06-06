#include<stdio.h>
int main(){
    int n, binary=0,temp=1,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0){
        rem=n%2;
        binary=binary+rem * temp;
        temp=temp * 10;
        n=n/2;
    }
    printf("binary equivalent = %d",binary);
    return 0;
}
