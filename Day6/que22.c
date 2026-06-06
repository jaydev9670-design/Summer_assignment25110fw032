#include<stdio.h>
int main(){
     int  binary,temp=1,rem,decimal=0;
    printf("Enter a number:");
    scanf("%d",&binary);
    while(binary>0){
        rem=binary%2;
        decimal=decimal+rem * temp;
        temp=temp * 2;
        binary=binary/10;
    }
    printf("Decimal equivalent = %d",decimal);
    return 0;
}