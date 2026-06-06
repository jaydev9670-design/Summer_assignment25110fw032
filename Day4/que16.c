//armastrong no.in range
#include<stdio.h>
int main(){
    int n1,n2,temp,sum=0,r;
    printf("Enter the range");
    scanf("%d%d",&n1,&n2);
    printf("Armstrong number in the range");
    for(int i=n1;i<=n2;i++){
        temp=i;
        sum=0;
        while(temp!=0){
            r=temp%10;
            sum=sum+(r*r*r);
            temp=temp/10;
        }
        if(sum==i){
            printf("%d ",i);
        }
    }
    return 0;

}