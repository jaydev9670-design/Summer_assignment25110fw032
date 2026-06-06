#include<stdio.h>
int main(){
    int n,largestprimefactor=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            largestprimefactor=i;
            n=n/i;
        }
    }
    printf("The largest prime factor of %d is %d",n,largestprimefactor);
    return 0;
}